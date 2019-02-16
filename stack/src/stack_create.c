/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 01:39:46 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 01:52:38 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_create(int *ar, size_t n)
{
	t_stack	*now;
	t_stack	*res;
	size_t	i;

	if (!ar || !n)
		return (NULL);
	i = -1;
	res = NULL;
	while (++i < n)
	{
		if (!(now = stack_new(ar[i])))
		{
			stack_del(&res);
			return (NULL);
		}
		res = stack_push(&res, now);
	}
	return (res);
}
