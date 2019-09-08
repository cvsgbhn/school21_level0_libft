int	ft_strlen(char *str)
{
	int	len_counter;

	while (*str)
	{
		len_counter++;
		str++;
	}
	return (len_counter);
}
