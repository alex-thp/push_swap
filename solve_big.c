/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_big.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 14:56:18 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	get_number_in_base_two(int num)
{
	char *tmp;
	int i;
	int	j;
	long k;

	tmp = malloc(10000);
	j = 0;
	i = 0;
	while (i < 10000)
	{
		tmp[i] = '\0';
		i++;
	}
	i = 0;
	while (num > 1)
	{
		tmp[i] = (num % 2) + 48;
		num = num / 2;
		i++;
	}
	tmp[i] = num + 48;
	num = 0;
	k = 0;
	while(i >= 0)
	{
		k = (k * 10) + ((tmp[i]) - 48);
		i--;
	}
	return (k);
}

int		*simplify_numbers(int *a, int size)
{
	int *simplified;
	int i;
	int	j;
	int count;
	int	tmp;

	simplified = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		count = 0;
		j = 0;
		tmp = a[i];
		while (j < size)
		{
			if (a[i] > a[j])
			{
				count++;
			}
			j++;
		}
		simplified[i] = count;
		i++;
	}
	print_stack(simplified, size);
	return (simplified);
}

void	solve_big_stack(int	*a, int	*b, int size)
{
	simplify_numbers(a, size);
	printf("//////\nresult : %ld\n///////\n", get_number_in_base_two(20));
	(void)a;
	(void)b;
	(void)size;
	return ;
}