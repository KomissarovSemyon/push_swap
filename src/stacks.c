/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:53:24 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/20 15:00:51 by semyonkomis      ###   ########.fr       */
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
