/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 01:55:52 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 01:57:39 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_pop(t_stack **head)
{
	t_stack	*res;

	if (!head || !(*head))
		return (NULL);
	res = *head;
	*head = (*head)->next;
	return (res);
}
