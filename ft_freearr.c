void    ft_freearr(**array)
{
    while (*array)
    {
        free(*array);
        array++;
    }
}