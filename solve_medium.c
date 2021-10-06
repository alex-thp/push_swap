/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_medium.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:48 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 17:51:06 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*solve_medium_stack(int *a, int	*b, int *size_a, int *size_b)
{
	int		i;

	i = 0;
	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	pb(&a, &b, size_a, size_b);
	printf("PB\n");
	solve_small_stack(a, size_a);
	if (b[0] < b[1])
	{
		printf("RB\n");
		rb(&b, *size_b);
	}
	printf("PA\n");
	pa(&a, &b, size_a, size_b);
	if (a[0] > a[1])
	{
		printf("RA\n");
	 	ra(&a, *size_a);
	}
	printf("PA\n");
	pa(&a, &b, size_a, size_b);
	if (a[0] > a[1])
	{
		printf("RA\n");
		ra(&a, *size_a);
	}
	return a;
}