#include <stdio.h>
#include "libft.h"

char	my_toupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char s[] = "AASSdsdDDeeee";
	char *a;

	a = ft_strmapi(s, my_toupper);
	if (a)
	{
		printf("Orijinal: %s\n", s);
		printf("Büyük harf: %s\n", a);
		free(a);
	}
	return (0);
}
