/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:13:51 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/26 18:47:02 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	partition(int *arr, int low, int high)
{
	int pivot;
	int i;
	int	j;

	i = low - 1;
	pivot = arr[high];
	j = low - 1;
	while (++j <= high - 1)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void		quick_sort(int *arr, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}

int			find_median(int *arr, int n)
{
	int	a[n];

	ft_memcpy(a, arr, n * sizeof(int));
	quick_sort(a, 0, n - 1);
	return (a[n / 2]);
}
