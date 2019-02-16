/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 00:06:15 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 00:39:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

t_stack				*stack_new(int val);
t_stack				*stack_create(int *ar, size_t n);
void				stack_delone(t_stack *node);
void				stack_del(t_stack **head);
t_stack				*stack_push(t_stack **head, t_stack *el);
t_stack				*stack_pop(t_stack **head);

#endif
