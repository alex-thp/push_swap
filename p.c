/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:33:32 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/07 13:01:22 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int **a, int **b, int *size_a, int *size_b)
{
	int		*a2;
	int		*b2;
	int		i;

	if (*size_b == 0)
		return ;
	a2 = malloc(sizeof(int) * (*size_a + 1));
	b2 = malloc(sizeof(int) * (*size_b - 1));
	(*size_a) += 1;
	(*size_b) -= 1;
	i = 0;
	while (i < *size_a)
	{
		a2[i + 1] = *((*a) + i);
		i++;
	}
	a2[0] = **b;
	i = 0;
	while (i < *size_b)
	{
		b2[i] = (*b)[i + 1];
		i++;
	}
	if(*size_a > 0)
	{
		free(*a);
		*a = a2;
	}
	if(*size_b > 0)
	{
		free(*b);
		*b = b2;
	}
}

void	pb(int **a, int **b, int *size_a, int *size_b)
{
	int		*a2;
	int		*b2;
	int		i;

	if (*size_a == 0)
		return ;
	a2 = malloc(sizeof(int) * (*size_a - 1));
	b2 = malloc(sizeof(int) * (*size_b + 1));
	(*size_a) -= 1;
	(*size_b) += 1;
	i = 0;
	while (i < *size_b)
	{
		b2[i + 1] = *((*b) + i);
		i++;
	}
	b2[0] = **a;
	i = 0;
	while (i < *size_a)
	{
		a2[i] = (*a)[i + 1];
		i++;
	}
	if(*size_a > 0)
	{
		free(*a);
		*a = a2;
	}
	if(*size_b > 0)
	{	
		free(*b);
		*b = b2;
	}
}
