/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:45:05 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/20 18:09:02 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	i = stacks->la;
	t = stacks->a[stacks->la - 1];
	while (--i > 0)
		stacks->a[i] = stacks->a[i - 1];
	stacks->a[0] = t;
	if (flag)
		write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	i = stacks->lb;
	t = stacks->b[stacks->lb - 1];
	while (--i > 0)
		stacks->b[i] = stacks->b[i - 1];
	stacks->b[0] = t;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rev_rotate_ab(t_stacks *stacks, int flag)
{
	int	i;
	int	t;

	if (!stacks)
		return ;
	i = stacks->la;
	t = stacks->a[stacks->la - 1];
	while (--i > 0)
		stacks->a[i] = stacks->a[i - 1];
	stacks->a[0] = t;
	i = stacks->lb;
	t = stacks->b[stacks->lb - 1];
	while (--i > 0)
		stacks->b[i] = stacks->b[i - 1];
	stacks->b[0] = t;
	if (flag)
		write(1, "rrb\n", 4);
}