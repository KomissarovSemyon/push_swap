/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:51:26 by amerlon-          #+#    #+#             */
/*   Updated: 2019/03/03 18:07:54 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_a_last(t_stacks *s)
{
	int	pos;

	if (!s)
		return ;
	pos = get_positions(s->a[s->la - 1], s->a[s->la - 2], s->a[s->la - 3]);
	if (pos == 2 || pos == 4)
		rev_rotate_a(s, 1);
	if (pos == 0 || pos == 3 || pos == 4)
		swap_a(s, 1);
	if (pos == 0)
		rev_rotate_a(s, 1);
	if (pos == 1)
		rotate_a(s, 1);
}

void	sort_3_b_last(t_stacks *s)
{
	int	pos;

	if (!s)
		return ;
	pos = get_positions(s->b[s->lb - 1], s->b[s->lb - 2], s->b[s->lb - 3]);
	if (pos == 1 || pos == 3)
		rev_rotate_b(s, 1);
	if (pos == 1 || pos == 2 || pos == 5)
		swap_b(s, 1);
	if (pos == 5)
		rev_rotate_b(s, 1);
	if (pos == 4)
		rotate_b(s, 1);
}

void	sort_small(t_stacks *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	if (s->la > 3)
		i = divide_a(s, 1);
	if (s->la == 2)
		sort_2_a(s);
	if (s->lb == 2)
		sort_2_b(s);
	if (s->la == 3)
		sort_3_a_last(s);
	if (s->lb == 3)
		sort_3_b_last(s);
	while (i-- > 0)
		push_a(s, 1);
}
