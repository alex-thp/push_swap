/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:48 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/13 16:09:19 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* s.c */

void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);

/* p.c */

void	pa(int **a, int **b, int *size_a, int *size_b);
void	pb(int **a, int **b, int *size_a, int *size_b);

/* r.c */

void	ra(int **a, int size_a);
void	rb(int **b, int size_b);
void	rr(int **a, int **b, int size_a, int size_b);
void	rra(int	**a, int size_a);
void	rrb(int	**b, int size_b);
void	rrr(int **a, int **b, int size_a, int size_b);

/* tools.c */

int		check_size_of_stack(int stack);
void	init_stack(int	*a, char **av, int	size_a);
int		check_if_solved(int	*a, int size_a);
void	print_stack(int *stack, int size);
void	print_stack_b(int *stack, int size);
void	print_both_stack(int *a, int *b, int size_a, int size_b);

/* solve_small.c */

void	solve_small_stack(int *a, int *size, int *b, int *size_b);
int		check_values(int a, int b);

/* solve_medium.c */

int		*solve_medium_stack(int *a, int	*b, int *size_a, int *size_b);

/* solve_big.c */

void	solve_big_stack(int	*a, int	*b, int size, int size_b);
int		*simplify_numbers(int *a, int size);
int		get_max_bytes(int size);
int		get_number_in_base_two(int num);