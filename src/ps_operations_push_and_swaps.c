/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_push_and _swaps.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:10:26 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/19 13:20:24 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	ps_swap(a);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **b)
{
	ps_swap(b);
	write(1, "sb\n", 3);
}

void	swap_ab(t_stack **a, t_stack **b)
{
	ps_swap(a);
	ps_swap(b);
	write(1, "ss\n", 3);
}

void	push_a(t_stack **a, t_stack **b)
{
	ps_push(b, a);
	write(1, "pa\n", 3);
}

void	push_b(t_stack **a, t_stack **b)
{
	ps_push(a, b);
	write(1, "pb\n", 3);
}
