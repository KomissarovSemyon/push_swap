/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_preprocessing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 06:03:18 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/17 07:18:51 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static int	norm_atoi(const char *str)
{
	unsigned int	res;
	int				sign;
	int				i;

	res = 0;
	i = 0;
	sign = (str[0] == '-') ? -1 : 1;
	str[0] == '-' ? i++ : (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * 10 / 10 != res ||
			(res * 10 + str[i] - '0') % 10 != str[i] - '0')
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

t_stack	*make_stack(int n, char **arr)
{
	t_stack	*res;
	int		*a;
	int		i;

	if (!(a = (int *)malloc(sizeof(int) * n)))
		return (NULL);
	i = -1;
	while (++i < n)
		if (!(a[i] = norm_atoi(arr[i])) && arr[i][0] != '0')
		{
			free(a);
			return (NULL);
		}
	res = stack_create(a, n);
	free(a);
	return (res);
}
