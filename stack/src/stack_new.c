/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 00:32:44 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 00:40:53 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_new(int val)
{
	t_stack	*res;

	if (!(res = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	res->value = val;
	res->next = NULL;
	return(res);
}
