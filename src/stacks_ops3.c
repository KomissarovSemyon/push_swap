/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_ops3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:45:05 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 18:48:16 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	t = stacks->a[0];
	i = 0;
	while (++i < stacks->la)
		stacks->a[i - 1] = stacks->a[i];
	stacks->a[i - 1] = t;
	if (flag && TO_PRINT)
		write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	t = stacks->b[0];
	i = 0;
	while (++i < stacks->lb)
		stacks->b[i - 1] = stacks->b[i];
	stacks->b[i - 1] = t;
	if (flag && TO_PRINT)
		write(1, "rrb\n", 4);
}

void	rev_rotate_ab(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	t = stacks->b[0];
	i = 0;
	while (++i < stacks->lb)
		stacks->b[i - 1] = stacks->b[i];
	stacks->a[i - 1] = t;
	t = stacks->a[0];
	i = 0;
	while (++i < stacks->la)
		stacks->a[i - 1] = stacks->a[i];
	stacks->b[i - 1] = t;
	if (flag && TO_PRINT)
		write(1, "rrr\n", 4);
}
