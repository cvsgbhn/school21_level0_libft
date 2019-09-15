#include "ft_libft.h"

char	*ft_strlcat(char *destination, const char *const_src, size_t number)
{
	char *end_of_dest;
	int counter;

	counter = 0;
	while(destination[counter])
		counter++;
	end_of_dest = &(destination[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return (number + counter + 1);
}
