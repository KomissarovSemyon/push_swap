/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 18:30:50 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 14:18:51 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	if (!(stacks = parse_input(argv + 1, argc - 1)))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	parse_commands(stacks);
	delete_stack(stacks);
	return (0);
}
