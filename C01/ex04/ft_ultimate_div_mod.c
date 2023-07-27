void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
#include <stdio.h>

int    main(void)
{
    int    a;
    int b;

    a = 85;
    b = 2;
    printf("a = %d , b = %d\n", a, b);
    printf("ft_ultimate_div_mod(&a, &b);\n");
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d , b = %d\n", a, b);
}
*/
