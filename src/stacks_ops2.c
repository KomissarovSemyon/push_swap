/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_ops2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 16:53:21 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/20 17:58:51 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stacks *stacks, int flag)
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
	if (flag && TO_PRINT)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stacks *stacks, int flag)
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
	if (flag && TO_PRINT)
		write(1, "rb\n", 3);
}

void	rotate_ab(t_stacks *stacks, int flag)
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
	if (flag && TO_PRINT)
		write(1, "rr\n", 3);
}