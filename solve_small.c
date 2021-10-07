/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/07 10:25:20 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_values(int a, int b)
{
	return (b - a);
}

void	solve_small_stack(int *a, int *size)
{
	int		i;

	i = 0;
	if(*size > 1)
	{
		while(check_if_solved(a, *size) != 0)
		{
			if (a[0] > a[1])
			{
				if (a[0] > a[2])
				{
					printf("RA\n");
					ra(&a, *size);
				}
				else{
					printf("SA\n");
					sa(a);
				}
			}
			if (a[1] > a[2])
			{
				if(a[1] > a[0])
				{
					printf("RRA\n");
					rra(&a, *size);
				}
				else {
					printf("SA\n");
					sa(a);
				}
			}
		}
	}
	return ;
}