/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:48:22 by ade-temm          #+#    #+#             */
/*   Updated: 2021/10/06 13:52:34 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *tab[10] = {
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
};
char *tab2[10] = {
	"10", "11", "12", "13", "14", "15", "16", "17", "18", "19"
};

int		main(int ac, char**av)
{
	(void)ac;
	(void)av;
	int i = -1;
	int *a = malloc(sizeof(int) * 10);
	int *b = malloc(sizeof(int) * 10);
	while (++i < 10)
	{
		a[i] = atoi(tab[i]);
		b[i] = atoi(tab2[i]);
	}
	//ss(a, b);
	//pb(&a, &b, 10, 10);
	rrr(&a, &b, 10, 10);
	printf("a = %d a2 = %d\n", a[0], a[9]);
	printf("b = %d b2 = %d\n", b[0], b[9]);
	//printf("a = %d a1 = %d\n", a[0], a[9]);
	//printf("b = %d b1 = %d\n", b[0], b[9]);
	//printf("b = %d b1 = %d\n", b[0], b[1]);
	return (0);
}