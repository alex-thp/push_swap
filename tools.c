/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 09:06:29 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_size_of_stack(int stack)
{
	return (stack - 1);
}

void	init_stack(int	*a, char **av, int	size_a)
{
	int		i;

	i = 0;
	while(i < size_a)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
}

int		check_if_solved(int	*a, int size_a)
{
	int		i;

	i = 0;
	while(i < size_a - 1)
	{
		if(a[i] > a[i + 1])
			return (1);
		i++;
	}
	return(0);
}

void	print_stack(int *stack, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", stack[i]);
		i++;
	}
}

void	print_stack_b(int *stack, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("                  %d\n", stack[i]);
		i++;
	}
}

void	print_both_stack(int *a, int *b, int size_a, int size_b)
{
	printf("Stack A:          ");
	printf("Stack B:\n");
	print_stack(a, size_a);
	print_stack_b(b, size_b);
	printf("\n");
}