/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:58:49 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 18:39:50 by amerlon-         ###   ########.fr       */
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
	if (pos == 5 || pos == 4 || pos == 2)
		swap_a(s, 1);
	if (pos == 5 || pos == 4 || pos == 3 || pos == 1)
		swap_basic(s);
	if (pos == 5 || pos == 3)
		swap_a(s, 1);
}

void		sort_2_a(t_stacks *s)
{
	if (s->a[s->la - 1] < s->a[s->la - 2])
		swap_a(s, 1);
}
