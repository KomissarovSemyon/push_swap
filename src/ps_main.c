/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:39:45 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/19 21:31:57 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	char	**nums;

	if (argc == 2)
	{
		if (!(nums = ft_strsplit(argv[1], ' ')))
			return (1);
	}
	if (argc == 1 || !(a = make_stack(argc - 1, argv + 1)))	
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
