/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 06:03:18 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/20 15:02:23 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if ((res > 2147483648 && sign == -1) || (res > 2147483647 && sign == 1) ||
		str[i])
		return (0);
	return (sign * res);
}

static int	*rev_array(int *a, size_t n)
{
	int		tmp;
	size_t	i;

	if (!a)
		return (NULL);
	i = -1;
	while (++i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
	return (a);
}

t_stacks	*parse_input(char **arr, int n)
{
	t_stacks	*res;
	int			i;

	res = create_stack(n);
	i = -1;
	while (++i < n)
	{
		res->a[i] = norm_atoi(arr[i]);
		if (res->a[i] == 0 && arr[i][0] != '0')
			return (delete_stack(res));
	}
	res->a = rev_array(res->a, res->la);
	return (res);
}
