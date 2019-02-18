/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:15:05 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/18 10:06:16 by semyonkomis      ###   ########.fr       */
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
	return (*head);
}
