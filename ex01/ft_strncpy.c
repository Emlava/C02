#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (dest_start);
}

int	main(void)
{
	char	source[] = "Hello!";
	char	destination[25];
	int	n = 6;

	ft_strncpy(destination, source, n);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}
