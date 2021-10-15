pa(int *a, int *b, int *size_a, int *size_b)
{
	int		*a2;
	int		*b2;
	int		i;

	if(*size_b == 0)
		return ;
	a2 = malloc(sizeof(int) * ((*size_a) + 1));
	b2 = malloc(sizeof(int) * ((*size_b) - 1));
}