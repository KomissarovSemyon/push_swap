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
	t = stacks->a[0];
	i = 0;
	while (++i < stacks->la)
		stacks->a[i - 1] = stacks->a[i];
	stacks->a[i - 1] = t;
	if (flag)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stacks *stacks, int flag)
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
	if (flag)
		write(1, "rb\n", 3);
}

void	rotate_ab(t_stacks *stacks, int flag)
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
	if (flag)
		write(1, "rr\n", 3);
}