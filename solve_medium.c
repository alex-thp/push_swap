/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_medium.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:48 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/07 11:04:35 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*solve_medium_stack(int *a, int	*b, int *size_a, int *size_b)
{
	int		i;
	int		j;

	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	solve_small_stack(a, size_a);
	i = 0;
	while(b[0] > a[i] && i < *size_a)
		i++;
	j = 0;
	while(i < *size_a)
	{
		printf("RRA\n");
		rra(&a, *size_a);
		i++;
		j++;
	}
	pa(&a, &b, size_a, size_b);
	printf("PA\n");
	while(j >= 0)
	{
		printf("RA\n");
		ra(&a, *size_a);
		j--;
	}
	i = 0;
	while(b[0] > a[i] && i < *size_a)
		i++;
	j = 0;
	while(i < *size_a)
	{
		printf("RRA\n");
		rra(&a, *size_a);
		i++;
		j++;
	}
	pa(&a, &b, size_a, size_b);
	printf("PA\n");
	while(j >= 0)
	{
		printf("RA\n");
		ra(&a, *size_a);
		j--;
	}
	return a;
}