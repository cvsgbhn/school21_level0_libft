#include "ft_libft.h"

void	ft_strmap(char *s, char (*f)(char))
{
	int length;
	int counter;
	char *f_results;

	length = ft_strlen(s);
	counter= 0;
	f_results = (char *)malloc(sizeof(char) * (length + 1));
	while (*s)
	{
		f_results[counter] = f(s);
		counter++;
		s++;
	}
	f_results[counter] = '\0';
	return (f_results);
}
