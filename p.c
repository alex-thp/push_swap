/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:33:32 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 13:06:05 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int **a, int **b, int size_a, int size_b)
{
	int		*a2;
	int		*b2;
	int		i;

	a2 = malloc(sizeof(int) * (size_a + 1));
	b2 = malloc(sizeof(int) * (size_b - 1));
	i = 0;
	if (size_b == 0)
		return ;
	while (i < size_a)
	{
		a2[i + 1] = *((*a) + i);
		i++;
	}
	a2[0] = **b;
	i = 0;
	while (i < size_b)
	{
		b2[i] = (*b)[i + 1];
		i++;
	}
	free(*a);
	free(*b);
	*a = a2;
	*b = b2;
}

void	pb(int **a, int **b, int size_a, int size_b)
{
	int		*a2;
	int		*b2;
	int		i;

	a2 = malloc(sizeof(int) * (size_a - 1));
	b2 = malloc(sizeof(int) * (size_b + 1));
	i = 0;
	if (size_a == 0)
		return ;
	while (i < size_b)
	{
		b2[i + 1] = *((*b) + i);
		i++;
	}
	b2[0] = **a;
	i = 0;
	while (i < size_a)
	{
		a2[i] = (*a)[i + 1];
		i++;
	}
	free(*a);
	free(*b);
	*a = a2;
	*b = b2;
}
