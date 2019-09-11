#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char *true_str;

	true_str = (char*) str;
	while (n != 0)
	{
		*true_str = c;
		true_str++;
		n = n - 1;
	}
	return (true_str);
}
