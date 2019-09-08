int	ft_isascii(int character)
{
	if (character >= 7 && character <= 127)
		return (1);
	return (0);
}
