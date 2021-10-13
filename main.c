/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 09:56:09 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char**av)
{
	int		size_a;
	int		size_b;
	int		*a;
	int		*b;
	
	size_a = ac - 1;
	size_b = 0;
	a = malloc(sizeof(int) * (size_a));
	b = malloc(sizeof(int) * (size_a));
	init_stack(a, av, size_a);
	if (size_a <= 3)
	{
		printf("solve_small\n");
		solve_small_stack(a, &size_a, b, &size_b);
	}
	else if (size_a <= 5)
	{
		printf("solve_medium\n");
		a = solve_medium_stack(a, b, &size_a, &size_b);
	}
	else
	{
		printf("solve_big\n");
		solve_big_stack(a, b, size_a);
	}
	//printf("ici :%d\n", 5>>2);
	//printf("size b : %d\n", size_b);
	//print_stack(b, size_b);
	return (0);
}
