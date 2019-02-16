/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 01:41:44 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 01:44:43 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_push(t_stack **head, t_stack *el)
{
	if (!head || !el)
		return (NULL);
	if (!(*head))
	{
		*head = el;
	}
	else
	{
		el->next = (*head);
		*head = el;
	}
	return (*head);
}
