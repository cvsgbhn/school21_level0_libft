#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len);

int		main(void)
{
	void *mem = "hello i'm m3m";

	ft_memset(mem, 'a', 8);
	printf("%p\n", mem);
	return(0);
}
