/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:39:45 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/21 15:19:35 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stacks	*stacks;

	if (!(stacks = parse_input(argv + 1, argc - 1)))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_stacks(stacks);
	printf("--------------\n");
	sort_a(stacks, stacks->la);
	printf("--------------\n");
	print_stacks(stacks);
	delete_stack(stacks);
	return (0);
}
