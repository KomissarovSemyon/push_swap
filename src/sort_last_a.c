/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:41:36 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 21:28:09 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_basic(t_stacks *s)
{
	push_b(s, 1);
	swap_a(s, 1);
	push_a(s, 1);
}

void		sort_3_a(t_stacks *s)
{
	int		pos;

	if (!s)
		return ;
	pos = get_positions(s->a[s->la - 1], s->a[s->la - 2], s->a[s->la - 3]);
	if (pos == 0 || pos == 1 || pos == 3)
		swap_a(s, 1);
	if (pos == 0 || pos == 1 || pos == 2 || pos == 4)
		swap_basic(s);
	if (pos == 0 || pos == 2)
		swap_a(s, 1);
}

void		sort_2_a(t_stacks *s)
{
	if (s->a[s->la - 1] > s->a[s->la - 2])
		swap_a(s, 1);
}
