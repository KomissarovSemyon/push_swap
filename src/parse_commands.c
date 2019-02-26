/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_commands.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:31:21 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 19:58:42 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	exec_cmd(t_stacks *s, char *str)
{
	if (!ft_strcmp(str, "sa"))
		swap_a(s, 0);
	else if (!ft_strcmp(str, "sb"))
		swap_b(s, 0);
	else if (!ft_strcmp(str, "ss"))
		swap_ab(s, 0);
	else if (!ft_strcmp(str, "pa"))
		push_a(s, 0);
	else if (!ft_strcmp(str, "pb"))
		push_b(s, 0);
	else if (!ft_strcmp(str, "ra"))
		rotate_a(s, 0);
	else if (!ft_strcmp(str, "rb"))
		rotate_b(s, 0);
	else if (!ft_strcmp(str, "rr"))
		rotate_ab(s, 0);
	else if (!ft_strcmp(str, "rra"))
		rev_rotate_a(s, 0);
	else if (!ft_strcmp(str, "rrb"))
		rev_rotate_b(s, 0);
	else if (!ft_strcmp(str, "rrr"))
		rev_rotate_ab(s, 0);
	else
		return (0);
	return (1);
}

void		parse_commands(t_stacks *s)
{
	char	*line;
	int		status;

	while ((status = ft_gnl(0, &line)) > 0)
	{
		if (!exec_cmd(s, line))
		{
			status = -1;
			break ;
		}
		free(line);
	}
	if (status == -1)
		write(1, "Error\n", 6);
	else if (sorted(s))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
