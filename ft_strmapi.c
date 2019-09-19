#include "ft_libft.h"

void	ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	int length;
	int counter;
	int index;
	char *f_results;

	length = ft_strlen(s);
	counter= 0;
	index = 0;
	f_results = (char *)malloc(sizeof(char) * (length + 1));
	while (*s)
	{
		f_results[counter] = f(index, s);
		counter++;
		s++;
		index++;
	}
	f_results[counter] = '\0';
	return (f_results);
}
