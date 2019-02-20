/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 03:41:29 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/20 14:45:08 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h> // DELETE THIS

void	quick_sort(int *arr, int low, int high);

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

t_stacks	*parse_input(char **arr, int n);
t_stacks	*create_stack(int n);
t_stacks	*delete_stack(t_stacks *stacks);
void		print_stacks(t_stacks *stacks);

#endif
