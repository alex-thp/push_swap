/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:33:32 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 13:51:44 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.
rrr : rra and rrb at the same time
*/

#include "push_swap.h"

void	ra(int **a, int size_a)
{
	int		i;
	int		tmp;

	i = 0;
	while(i < size_a - 1)
	{
		tmp = *((*a) + i);
		//printf("1 = %d, 2 = %d\n", *((*a) + i), *((*a) + i + 1));
		*((*a) + i) = *((*a) + i + 1);
		*((*a) + i + 1) = tmp;
		i++;
	}
}

void	rb(int **b, int size_b)
{
	int		tmp;
	int		i;

	i = 0;
	while(i < size_b - 1)
	{
		tmp = *((*b) + i);
		*((*b) + i) = *((*b) + i + 1);
		*((*b) + i + 1) = tmp;
		i++;
	}
}

void	rr(int **a, int **b, int size_a, int size_b)
{
	ra(a, size_a);
	rb(b, size_b);
}

void	rra(int	**a, int size_a)
{
	int		tmp;

	while(size_a > 1)
	{
		tmp = *((*a) + size_a - 1);
		*((*a) + size_a - 1) = *((*a) + size_a - 2);
		*((*a) + size_a - 2) = tmp;
		size_a--;
	}
}

void	rrb(int	**b, int size_b)
{
	int		tmp;

	while(size_b > 1)
	{
		tmp = *((*b) + size_b - 1);
		*((*b) + size_b - 1) = *((*b) + size_b - 2);
		*((*b) + size_b - 2) = tmp;
		size_b--;
	}
}

void	rrr(int **a, int **b, int size_a, int size_b)
{
	rra(a, size_a);
	rrb(b, size_b);
}