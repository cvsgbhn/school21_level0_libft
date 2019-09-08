#include <stdio.h>

int	ft_isdigit(int character);
int	ft_isalpha(int character);
int	ft_isalnum(int character);
int	ft_isascii(int character);

int	main(void)
{
	printf("%s\n", "ISDIGIT TESTS");
	printf("%d %s\n", ft_isdigit('1'), "expected 1");
	printf("%d %s\n", ft_isdigit('\0'), "expected 0");
	printf("%d %s\n", ft_isdigit(' '), "expected 0");
	printf("%d %s\n", ft_isdigit('s'), "expected 0 ");
	printf("%s", "\n\n\n\n");


	printf("%s\n", "ISALPHA TESTS");
	printf("%d %s\n", ft_isalpha('1'), "expected 0");
	printf("%d %s\n", ft_isalpha('a'), "expected 1");
	printf("%d %s\n", ft_isalpha('g'), "expected 1");
	printf("%d %s\n", ft_isalpha('z'), "expected 1");
	printf("%d %s\n", ft_isalpha('A'), "expected 1");
	printf("%d %s\n", ft_isalpha('R'), "expected 1");
	printf("%d %s\n", ft_isalpha('Z'), "expected 1");
	printf("%d %s\n", ft_isalpha('-'), "expected 0");
	printf("%d %s\n", ft_isalpha(' '), "expected 0");
	printf("%s", "\n\n\n\n");

	printf("%s\n", "ISALNUM TESTS");
	printf("%d %s\n", ft_isalnum('1'), "expected 1");
	printf("%d %s\n", ft_isalnum('a'), "expected 1");
	printf("%d %s\n", ft_isalnum('V'), "expected 1");
	printf("%d %s\n", ft_isalnum('-'), "expected 0");
	printf("%d %s\n", ft_isalnum('\t'), "expected 0");
	printf("%s", "\n\n\n\n");

	printf("%s\n", "ISASCII TESTS");
	printf("%d %s\n", ft_isascii('1'), "expected 1");
	printf("%d %s\n", ft_isascii(5), "expected 0");
	printf("%d %s\n", ft_isascii('g'), "expected 1");
	printf("%d %s\n", ft_isascii('\n'), "expected 1");
	printf("%s", "\n\n\n\n");
	return (0);
}
