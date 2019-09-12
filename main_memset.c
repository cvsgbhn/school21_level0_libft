#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char mem[14] = "hello i'm m3m";
	char mem2[14] = "hello i'm m3m";

//	printf("%s\n", memset(mem2, 'a',8));
	ft_memset(mem, 'a', 8);
	printf("%s\n", mem);
	ft_bzero(mem, 5);
	printf("%s\n", mem);
	bzero(mem2, 5);
	printf("%s\n",mem2 + 6);
//	printf("%s\n", mem2);
	return(0);
}
