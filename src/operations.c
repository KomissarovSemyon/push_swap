/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:00:56 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 07:18:50 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_swap(t_stack **head)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!head || !(*head) || !((*head)->next))
		return (NULL);
	tmp1 = stack_pop(head);
	tmp2 = stack_pop(head);
	*head = stack_push(head, tmp1);
	*head = stack_push(head, tmp2);
	return (*head);
}

/*	
**	from s1 to s2
*/	

int		ps_push(t_stack **s1, t_stack **s2)
{
	if (!s1 || !s2 || !(*s1))
		return (0);
	stack_push(s2, stack_pop(s1));
	return (1);
}

void	ps_rotate(t_stack **head)
{
	t_stack	*tmp;

	if (!head || !(*head) || !((*head)->next))
		return ;
	tmp = stack_pop(head);
	stack_pushback(head, tmp);
}

void	ps_rev_rotate(t_stack **head)
{
	t_stack	*now;
	t_stack	*tmp;

	if (!head || !(*head) || !((*head)->next))
		return ;
	tmp = stack_pop(head);
	now = *head;
	while (now->next)
		now = now->next;
	now->next = tmp;
}
