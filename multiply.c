//multiply two integers without using '*'

long		multiply(int nb1, int nb2)
{
	int i;
	long product;

	i = -1;
	product = 0;
	if (nb2 >= 0)
		while (++i < nb2)
			product += nb1;
	else
	{
		i = 1;
		while (--i > nb2)
			product -= nb1;
	}
	return (product);
}
