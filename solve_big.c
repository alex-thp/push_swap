/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_big.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 16:34:44 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_number_in_base_two(int num)
{
	char *tmp;
	int i;
	int	j;
	int k;

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
				count++;
			j++;
		}
		simplified[i] = count;
		i++;
	}
	//print_stack(simplified, size);
	return (simplified);
}

int		get_max_bytes(int size)
{
	int		count;

	count = 1;
	while(size>>1 != 0)
	{
		size = size>>1;
		count++;
	}
	return(count);
}


/*
for(int j = 0 ; j < size ; ++j)
    {
        int num = a.top(); // top number of A
        if ((num >> i)&1 == 1) ra(); 
        // if the (i + 1)-th bit is 1, leave in stack a
        else pb();
        // otherwise push to stack b
    }
    // put into boxes done
    while (!b.empty()) pa(); // while stack b is not empty, do pa
    
    // connect numbers done
*/

void	solve_big_stack(int	*a, int	*b, int size, int size_b)
{
	int	max_bytes;
	int i;
	int	j;
	int	num;
	int	*tmp;
	int	*tmp_b;
	int	tmp_size;
	int	tmp_size_b;

	tmp = simplify_numbers(a, size);
	tmp_b = malloc(1);
	tmp_size = size;
	tmp_size_b = size_b;
	max_bytes = get_max_bytes(size);
	i = 0;
	while(check_if_solved(a, size) != 0)
		{
		while (i < max_bytes)
		{
			j = 0;
			while(j < size)
			{
				num = tmp[0];
				if(((num >> i)&1) == 1)
				{
					ra(&a, size);
					ra(&tmp, tmp_size);
				}
				else
				{
					//printf("i = %d||||||| %d ||||||||size a : %d ||||||| size b : %d\n",i,max_bytes, size, size_b);
					pb(&a, &b, &size, &size_b);
					pb(&tmp, &tmp_b, &tmp_size, &tmp_size_b);
				}
				j++;
			}
			while(size_b != 0)
			{
				pa(&a, &b, &size, &size_b);
				pa(&tmp, &tmp_b, &tmp_size, &tmp_size_b);
			}
			i++;
		}
	}
	return ;
}