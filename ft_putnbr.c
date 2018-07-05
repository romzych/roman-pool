void ft_putchar(char c);

int ft_size(int nb)
{
	int size;
	int tmp;

	tmp = nb;
	size = 1;
	while(tmp >= 10)
	{
		tmp = tmp / 10;
		size = size * 10;
	}
	return(size);
}


void ft_putnbr(int nb)
{
	int size;
	int min;

	min = 0;
	if (nb == -2147483648)
	{
		nb++;
		min++;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	size = ft_size(nb);
	while(size != 1)
	{
		ft_putchar(nb / size % 10 + 48);
		size = size / 10;
	}
	ft_putchar(nb % 10 + 48 + min);
}



int main()
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return(0);
}
