char	*ft_strrchr(const char *str, int symbol)
{
	char *pointer;
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == symbol)
			pointer = str[counter];
		counter++;
	}
	return (pointer);
}
