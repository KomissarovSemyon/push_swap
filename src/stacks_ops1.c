/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_ops1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:32:48 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/21 15:32:48 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stacks *stacks, int flag)
{
	int	tmp;

	if (!stacks)
		return ;
	if (stacks->la > 1)
	{
		tmp = stacks->a[stacks->la - 1];
		stacks->a[stacks->la - 1] = stacks->a[stacks->la - 2];
		stacks->a[stacks->la - 2] = tmp;
		if (flag)
			write(1, "sa\n", 3);
	}
}

void	swap_b(t_stacks *stacks, int flag)
{
	int	tmp;

	if (!stacks)
		return ;
	if (stacks->lb > 1)
	{
		tmp = stacks->b[stacks->lb - 1];
		stacks->b[stacks->lb - 1] = stacks->b[stacks->lb - 2];
		stacks->b[stacks->lb - 2] = tmp;
		if (flag)
			write(1, "sb\n", 3);
	}
}

void	swap_ab(t_stacks *stacks, int flag)
{
	int	tmp;

	if (!stacks)
		return ;
	if (stacks->la > 1 && stacks->lb > 1)
	{
		tmp = stacks->a[stacks->la - 1];
		stacks->a[stacks->la - 1] = stacks->a[stacks->la - 2];
		stacks->a[stacks->la - 2] = tmp;
		tmp = stacks->b[stacks->lb - 1];
		stacks->b[stacks->lb - 1] = stacks->b[stacks->lb - 2];
		stacks->b[stacks->lb - 2] = tmp;
		if (flag)
			write(1, "ss\n", 3);
	}
}

void	push_a(t_stacks *stacks, int flag)
{
	if (!stacks || !(stacks->lb))
		return ;
	stacks->a[stacks->la] = stacks->b[stacks->lb - 1];
	stacks->lb--;
	stacks->la++;
	if (flag)
		write(1, "pa\n", 3);
}

void	push_b(t_stacks *stacks, int flag)
{
	if (!stacks || !(stacks->la))
		return ;
	stacks->b[stacks->lb] = stacks->a[stacks->la - 1];
	stacks->la--;
	stacks->lb++;
	if (flag)
		write(1, "pb\n", 3);
}