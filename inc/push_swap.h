/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 03:41:29 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 05:11:57 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "stack.h"

t_stack	*ps_swap(t_stack **head);
int		ps_push(t_stack **s1, t_stack **s2);

#endif
