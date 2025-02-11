int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

char *ft_str_type(int num) 
{
	if (num == 0)
	{
		return ("Found a non-alpha char");
	}
	else
	{
		return ("Empty or only alpha char");
	}
}

int	 main(void)
{
	char str1[] = "Hello!"; // non-alpha
	char str2[] = "alpha";  // alpha
	char str3[] = "";	// empty

	printf("%s\n%s\n%s\n",
		ft_str_type(ft_str_is_alpha(str1)),
		ft_str_type(ft_str_is_alpha(str2)),
		ft_str_type(ft_str_is_alpha(str3)));
	return (0);
}*/
