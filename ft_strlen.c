int	ft_strlen(char *str)
{
	int	len_counter;
	
	len_counter = 0;
	while (*str)
	{
		len_counter++;
		str++;
	}
	return (len_counter);
}
