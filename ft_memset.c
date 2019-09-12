#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *true_str = (unsigned char *)str;

	while (n > 0)
	{
		*true_str = c;
		true_str++;
		n--;
	}
	return (true_str);
}
