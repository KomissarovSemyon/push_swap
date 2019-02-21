/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:44:31 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/21 20:02:51 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		divide_a(t_stacks *s)
{
	int med;
	int	i;
	int	res;

	i = s->la;
	med = find_median(s->a, i);
	res = 0;
	while (--i >= 0)
	{
		if (s->a[s->la - 1] > med)
		{
			res++;
			push_b(s, 1);
		}
		else if (s->a[s->la - 1] < med)
			rotate_a(s, 1);
		else
		{
			res++;
			push_b(s, 1);
			rotate_b(s, 1);
		}
	}
	rev_rotate_b(s, 1);
	return (res);
}

int		divide_b(t_stacks *s)
{
	int med;
	int	i;
	int	res;

	i = s->lb;
	med = find_median(s->b, i);
	res = 0;
	while (--i >= 0)
	{
		if (s->b[s->lb - 1] < med)
		{
			res++;
			push_a(s, 1);
		}
		else if (s->b[s->lb - 1] > med)
			rotate_b(s, 1);
		else
		{
			res++;
			push_a(s, 1);
			rotate_a(s, 1);
		}
	}
	rev_rotate_a(s, 1);
	return (res);
}

void	sort_a(t_stacks *s, int top)
{
	int	t;
	int	*tmp_ptr;
	int	tmp;

	printf("sort a\n");
	print_stacks(s);
	if (top == 3)
		sort_3_a(s);
	else if (top == 2)
		sort_2_a(s);
	else if (top != 1)
	{
		t = divide_a(s);
		sort_a(s, s->la);
		tmp_ptr = s->b;
		tmp = s->lb;
		s->b = tmp_ptr + (tmp - t);
		s->lb = t;
		sort_b(s, t);
		s->b = tmp_ptr;
		s->lb = tmp;
		while (--t >= 0)
			push_a(s, 1);
	}
}

void	sort_b(t_stacks *s, int top)
{
	int	t;
	int	*tmp_ptr;
	int	tmp;

	printf("sort b\n");
	print_stacks(s);
	if (top == 3)
		sort_3_b(s);
	else if (top == 2)
		sort_2_b(s);
	else if (top != 1)
	{
		t = divide_b(s);
		sort_b(s, s->lb);
		tmp_ptr = s->a;
		tmp = s->la;
		s->a = tmp_ptr + (tmp - t);
		s->la = t;
		sort_a(s, t);
		s->a = tmp_ptr;
		s->la = tmp;
		while (--t >= 0)
			push_b(s, 1);
	}
}
