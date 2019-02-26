/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:53:24 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 18:40:18 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*create_stack(int n)
{
	t_stacks *res;

	if (!(res = (t_stacks *)malloc(sizeof(t_stacks))))
		exit(-1);
	res->a = (int *)malloc(sizeof(int) * n);
	res->b = (int *)malloc(sizeof(int) * n);
	if (!res->a || !res->b)
		exit(-1);
	res->la = (int)n;
	res->lb = 0;
	return (res);
}

t_stacks	*delete_stack(t_stacks *stacks)
{
	free(stacks->a);
	free(stacks->b);
	free(stacks);
	return (NULL);
}

void		print_stacks(t_stacks *stacks)
{
	int	i;

	ft_putendl("1 stack:");
	i = -1;
	while (++i < stacks->la)
	{
		ft_putnbr(stacks->a[i]);
		if (i + 1 != stacks->la)
			ft_putstr("->");
	}
	if (!i)
		ft_putstr("empty");
	ft_putendl("\n2 stack:");
	i = -1;
	while (++i < stacks->lb)
	{
		ft_putnbr(stacks->b[i]);
		if (i + 1 != stacks->lb)
			ft_putstr("->");
	}
	if (!i)
		ft_putstr("empty");
	ft_putendl("");
}

int			sorted(t_stacks *s)
{
	int		i;

	if (!s || s->lb)
		return (0);
	i = 0;
	while (++i < s->la)
		if (s->a[i - 1] > s->a[i])
			return (0);
	return (1);
}

int			get_positions(int a, int b, int c)
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
