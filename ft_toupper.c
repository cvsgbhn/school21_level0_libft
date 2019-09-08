int	ft_toupper(int character)
{
	if (character >= 97 && character <= 122)
		return(character - 32);
	return (character);
}
