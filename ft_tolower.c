int	ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		return(character + 32);
	return (character);
}