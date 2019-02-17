/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:15:05 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 05:20:01 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_pushback(t_stack **head, t_stack *el)
{
	t_stack	*now;

	if (!head || !el)
		return (NULL);
	if (!((*head)->next))
	{
		*head = el;
		return (*head);
	}
	now = *head;
	while (now)
		now = now->next;
	now->next = el;
	return (head);
}
