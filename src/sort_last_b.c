/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:58:49 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 21:27:50 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_basic(t_stacks *s)
{
	push_a(s, 1);
	swap_b(s, 1);
	push_b(s, 1);
}

void		sort_3_b(t_stacks *s)
{
	int		pos;

	if (!s)
		return ;
	pos = get_positions(s->b[s->lb - 1], s->b[s->lb - 2], s->b[s->lb - 3]);
	if (pos == 5 || pos == 4 || pos == 2)
		swap_b(s, 1);
	if (pos == 5 || pos == 4 || pos == 3 || pos == 1)
		swap_basic(s);
	if (pos == 5 || pos == 3)
		swap_b(s, 1);
}

void		sort_2_b(t_stacks *s)
{
	if (s->b[s->lb - 1] < s->b[s->lb - 2])
		swap_b(s, 1);
}
