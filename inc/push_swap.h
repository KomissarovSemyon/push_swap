/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 03:41:29 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/21 14:34:49 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h> // DELETE THIS

/*
**	all operations
*/

typedef struct	s_stacks
{
	int			*a;
	int			*b;
	int			la;
	int			lb;
}				t_stacks;

# define TO_PRINT 1

void		quick_sort(int *arr, int low, int high);
t_stacks	*parse_input(char **arr, int n);
t_stacks	*create_stack(int n);
t_stacks	*delete_stack(t_stacks *stacks);
void		print_stacks(t_stacks *stacks);
int			find_median(int *arr, int n);
int			get_positions(int a, int b, int c);
void		sort_2_a(t_stacks *s);
void		sort_3_a(t_stacks *s);
void		sort_2_b(t_stacks *s);
void		sort_3_b(t_stacks *s);
void		sort_a(t_stacks *s, int top);
void		sort_b(t_stacks *s, int top);
int			divide_a(t_stacks *s);
int			divide_b(t_stacks *s);

void		swap_a(t_stacks *stacks, int flag);
void		swap_b(t_stacks *stacks, int flag);
void		swap_ab(t_stacks *stacks, int flag);
void		push_a(t_stacks *stacks, int flag);
void		push_b(t_stacks *stacks, int flag);
void		rotate_a(t_stacks *stacks, int flag);
void		rotate_b(t_stacks *stacks, int flag);
void		rotate_ab(t_stacks *stacks, int flag);
void		rev_rotate_a(t_stacks *stacks, int flag);
void		rev_rotate_b(t_stacks *stacks, int flag);
void		rev_rotate_ab(t_stacks *stacks, int flag);

#endif
