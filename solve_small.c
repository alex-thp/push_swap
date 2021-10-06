/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 17:05:02 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_values(int a, int b)
{
	return (b - a);
}

void	solve_small_stack(int *a, int *size)
{
	int		*size_a;
	int		i;

	size_a = size;
	i = 0;
	while(i < (*size) - 1)
	{
		if(check_values(a[i], a[i + 1]) < 0)
		{
			if(i == 0)
			{
				printf("SA\n");
				sa(a);
			}
			else
			{
				printf("RRA\n");
				rra(&a, *size_a);
			}
		}
		i++;
	}
	return ;
}