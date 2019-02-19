/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:39:45 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/18 14:39:30 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1 || !(a = make_stack(argc - 1, argv + 1)))	
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (a)
	{
		printf("%d ", a->value);
		a = a->next;
	}
	return (0);
}
