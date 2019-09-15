#include "ft_libft.h>"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int h_counter;
	int n_counter;
	char *ft_haystack;
	char *ft_needle;

	h_counter = 0;
	ft_haystack = (char *)haystack;
	ft_needle = (char *)needle;
	while (ft_haystack[h_counter])
	{
		n_counter = 0;
		while (ft_haystack[h_counter] == ft_needle[n_counter] && ft_needle[n_counter])
		{
			h_counter++;
			n_counter++;
		}
		h_counter -= n_counter;
		if (ft_needle[n_counter] == '\0')
			return (&(ft_haystack[h_counter]));
		h_counter++;
}
return (0);
}
	}
}
