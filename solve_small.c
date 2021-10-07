/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/07 10:11:22 by ade-temm         ###   ########.fr       */
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
			i = 0;
			while(i < 2)
			{
				if(a[i] > a[i + 1])
				{
					if(i == 0)
					{
						printf("SA\n");
						sa(a);
					}
					else{
						printf("RRA\n");
						rra(&a, *size);
					}
				}
				i++;
			}
		}
	}
	return ;
}