int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (src_len + size);
	while (i < (size - dest_len - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size >= dest_len)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int    main(int argc, char *argv[])
{
    char            *dest1;
    char            *dest2;
    unsigned int    size;
    unsigned int    n;

    if (3 < argc)
    {
        n = atoi(argv[3]);
        size = strlen(argv[1]) + strlen(argv[2]) + 1;
        dest1 = malloc(size * sizeof(char));
        dest2 = malloc(size * sizeof(char));
        strcpy(dest1, argv[1]);
        strcpy(dest2, argv[1]);
        printf("src = '%s', dest = '%s', n = %d\n\\/\n", 
	argv[2], argv[1], n);
        printf("strlcat = '%zu', dest = '%s'\n",
	strlcat(dest1, argv[2], n),dest1);
        printf("ft_strlcat = '%u', dest = '%s'\n",
	ft_strlcat(dest2, argv[2], n),dest2);
    }
    else
        printf("required 's1' 's2' 'n'\n");
}
*/
