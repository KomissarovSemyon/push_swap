/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 03:41:29 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/19 22:28:57 by amerlon-         ###   ########.fr       */
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

#endif
