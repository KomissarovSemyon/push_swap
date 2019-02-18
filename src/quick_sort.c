/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:13:51 by semyonkomis       #+#    #+#             */
/*   Updated: 2019/02/18 13:59:00 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

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

void quick_sort(int *arr, int low, int high) 
{
	int	pi;

	if (low < high) 
	{ 
		pi = partition(arr, low, high); 
		quick_sort(arr, low, pi - 1); 
		quick_sort(arr, pi + 1, high); 
	} 
} 
