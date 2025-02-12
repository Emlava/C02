char	*ft_strcapitalize(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (str == str_start || (*(str - 1) < '0')
			|| (*(str - 1) > '9' && *(str - 1) < 'A')
			|| (*(str - 1) > 'Z' && *(str - 1) < 'a')
			|| (*(str - 1) > 'z'))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
			{
				*str += 32;	
			}
		}
		str++;
	}
	str = str_start;
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}*/
