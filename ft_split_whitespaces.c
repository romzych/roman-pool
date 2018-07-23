#include <stdlib.h>
#include <stdio.h>




int ft_count_word(char *str)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == 32)
			i++;
		else if (str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == 32 || str[i + 1] == '\0')
		{	
			i++;
			size++;
		}
		else 
			i++;
	}
	return (size);
}

int ft_count_letters(char *str)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i] != '\n' && str[i] != '\t' && str[i] != 32 && str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == 32)
			i++;
		else
		{	
			size++;
			i++;
		}
	}
	return (size);
}

char **ft_split_whitespaces(char *str)
{
	char **tab;i
	int i;
	int y;
	int x;

	y = 0;
	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1))))
		return (0);
	while (y < ft_count_words(str))
	{
		x = 0;	
		while (str[i] == '\n' || str[i] == '\t' || str[i] == 32)
			i++;
		if (!(tab[y] = (char*)malloc(sizeof(char) * (ft_count_letters(str + i) + 1))))
			return (0); 
		while (str[i] != '\n' && str[i] != '\t' && str[i] != 32)
		{	
			tab[y][x] = str[i];
			x++;
			i++;
		};
		y++;
	}
	return(*tab);
}

int main()
{
	char str[] = "   oui   hjfhs   svjz  	vj;ai  ";
	ft_split_whitespaces(str);
	return (0);
}
