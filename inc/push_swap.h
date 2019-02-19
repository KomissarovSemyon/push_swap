/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 03:41:29 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/19 13:24:22 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "stack.h"
# include <stdio.h> // DELETE THIS

t_stack	*make_stack(int n, char **arr);
t_stack	*ps_swap(t_stack **head);
int		ps_push(t_stack **s1, t_stack **s2);
void	ps_rotate(t_stack **head);
void	ps_rev_rotate(t_stack **head);
void	quick_sort(int *arr, int low, int high);

/*
**	all operations
*/

void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	swap_ab(t_stack **a, t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_ab(t_stack **a, t_stack **b);

#endif
