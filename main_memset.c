#include <stdio.h>

int		main(void)
{
	void *mem = "hello i'm m3m";

	mem = ft_memset(mem, 'a', 8);
	printf("%s\n", mem);
	return(0);
}
