/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_big.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/15 09:47:56 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			if (a[i] > a[j] && i != j)
				count++;
			j++;
		}
		//printf("COUNT = %d\n", count);
		simplified[i] = count;
		i++;
	}
	//print_stack(simplified, size);
	return (simplified);
}

int		get_max_bytes(int size)
{
	int		count;

	count = 0;
	while (size>>count != 0)
		count++;
	return (count);
	// int		count;

	// count = 0;
	// while(size>>1 != 0)
	// {
	// 	size = size>>1;
	// 	count++;
	// }
	// return(count);
}


/*
int size = a.size();
int max_num = size - 1; // the biggest number in a is stack_size - 1
int max_bits = 0; // how many bits for max_num 
while ((max_num >> max_bits) != 0) ++max_bits;
for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
{
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
}
*/

int	*solve_big_stack(int *a, int *b, int *size, int *size_b)
{
	int		*tmp;
	int		i;
	int		j;
	int		num;
	int		stack_size;

	tmp = simplify_numbers(a, *size);
	stack_size = *size;
	// printf("\n|||||||||||");
	//print_stack(tmp, *size);
	// printf("|||||||||||\n");
	// printf("SIZE = %d\n", *size);
	i = 0;
	while(i < get_max_bytes((stack_size) - 1))
	{
		j = 0;
		while(j < stack_size)
		{
			num = tmp[0];
			if (tmp[0] >= stack_size)
			{
				printf("I = %d ||| J = %d ||| TMP[0] = %d, NUM = %d ||| SIZE A = %d ||| SIZE B = %d\n", i, j, tmp[0], num, *size, *size_b);
			}
			//printf("NUM = %d  ||| ", num);
			if(((num >> i) & 1) == 1)
			{
				ra(&tmp, *size);
				//printf("ra\n");
			}
			else{
				//printf("pb\n");
				//printf("GO TO B : %d ||| size A : %d ||| size B : %d ||| stack size : %d\n\n", tmp[0], *size, *size_b, stack_size);
				pb(&tmp, &b, size, size_b);
			}
			j++;
		}
		while(*size_b > 0)
		{
			//printf("pa\n");
			//printf("BACK TO A : %d ||| size A : %d ||| size B : %d\n\n", b[0], *size, *size_b);
			pa(&tmp, &b, size, size_b);
		}
		i++;
	}
	//print_stack(tmp, *size);
	return (tmp);
}