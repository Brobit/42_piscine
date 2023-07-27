void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int    main(void)
{
    int    a;
    int b;

    a = 0;
    b = 42;
    printf("a = %d et b = %d\n", a, b);
    printf("ft_swap(&a, &b);\n");
    ft_swap(&a, &b);
    printf("a = %d et b = %d\n", a, b);
}
*/
