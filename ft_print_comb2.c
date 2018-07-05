void ft_putchar(char c);

void ft_print(int a, int b)
{
	char i;

	i = a / 10 + 48;
	ft_putchar(i);
	i = a % 10 + 48;	
	ft_putchar(i);
	ft_putchar(' ');	
	i = b / 10 + 48;
	ft_putchar(i);	
	i = b % 10 + 48;	
	ft_putchar(i);	
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		if(b > 99)
		{
			a++;
			b = 0;
		}
		if (a < b)
		ft_print(a, b);
		b++;
	}
	
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
