/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_rev_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:29:19 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/19 13:30:48 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack **a)
{
	ps_rev_rotate(a);
	write(1, "rra\n", 3);
}

void	rev_rotate_b(t_stack **b)
{
	ps_rev_rotate(b);
	write(1, "rrb\n", 3);
}

void	rev_rotate_ab(t_stack **a, t_stack **b)
{
	ps_rev_rotate(a);
	ps_rev_rotate(b);
	write(1, "rrr\n", 3);
}
