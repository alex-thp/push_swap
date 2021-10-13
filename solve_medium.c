/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_medium.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:48 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 09:11:53 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*solve_medium_stack(int *a, int	*b, int *size_a, int *size_b)
{
	int		i;
	int		j;

	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	print_both_stack(a, b, *size_a, *size_b);
	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	print_both_stack(a, b, *size_a, *size_b);
	if(b[0] > b[1])
	{
		printf("SB\n");
		sb(b);
		print_both_stack(a, b, *size_a, *size_b);
	}
	solve_small_stack(a, size_a, b, size_b);
	i = 0;
	while (b[0] > a[i] && i < *size_a)
		i++;
	j = i;
	if (i == *size_a)
		i = 0;
	while (i != 0)
	{
		printf("RA\n");
		ra(&a, *size_a);
		print_both_stack(a, b, *size_a, *size_b);
		i--;
	}
	pa(&a, &b, size_a, size_b);
	printf("PA\n");
	print_both_stack(a, b, *size_a, *size_b);
	i = 0;
	while (b[0] > a[i] && j < *size_a)
	{	
		i++;
		j++;
	}
	if (i == *size_a)
		i = 0;
	while (i != 0)
	{
		printf("RA\n");
		ra(&a, *size_a);
		print_both_stack(a, b, *size_a, *size_b);
		i--;
	}
	pa(&a, &b, size_a, size_b);
	printf("PA\n");
	print_both_stack(a, b, *size_a, *size_b);
	while(check_if_solved(a, *size_a) == 1)
	{
		printf("RA\n");
		ra(&a, *size_a);
		print_both_stack(a, b, *size_a, *size_b);
	}
	return a;
}