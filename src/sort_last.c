/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:58:49 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/21 14:54:46 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_positions(int a, int b, int c)
{
	if (a > b && b > c)
		return (0);
	if (a > c && c > b)
		return (1);
	if (b > a && a > c)
		return (2);
	if (c > a && a > b)
		return (3);
	if (b > c && c > a)
		return (4);
	if (c > b && b > a)
		return (5);
	return (-1);
}

static void	swap_basic(t_stacks *s)
{
	push_b(s, 1);
	swap_a(s, 1);
	push_a(s, 1);
}

void		sort_3(t_stacks *s)
{
	int		pos;

	if (!s)
		return ;
	pos = get_positions(s->a[s->la - 1], s->a[s->la - 2], s->a[s->la - 3]);
	if (pos == 5 || pos == 4 || pos == 2)
		swap_a(s, 1);
	if (pos == 5 || pos == 4 || pos == 3 || pos == 1)
		swap_basic(s);
	if (pos == 5 || pos == 3)
		swap_a(s, 1);
}

void		sort_2(t_stacks *s)
{
	if (s->a[s->la - 1] < s->a[s->la - 2])
		swap_a(s, 1);
}
