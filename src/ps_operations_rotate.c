/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:21:12 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/19 13:23:42 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a)
{
	ps_rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **b)
{
	ps_rotate(b);
	write(1, "rb\n", 3);
}

void	rotate_ab(t_stack **a, t_stack **b)
{
	ps_rotate(a);
	ps_rotate(b);
	write(1, "rr\n", 3);
}
