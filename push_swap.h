/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:48 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 13:51:56 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);
void	pa(int **a, int **b, int size_a, int size_b);
void	pb(int **a, int **b, int size_a, int size_b);
void	ra(int **a, int size_a);
void	rb(int **b, int size_b);
void	rr(int **a, int **b, int size_a, int size_b);
void	rra(int	**a, int size_a);
void	rrb(int	**b, int size_b);
void	rrr(int **a, int **b, int size_a, int size_b);
