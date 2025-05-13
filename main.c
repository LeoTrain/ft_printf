#include "ft_printf/headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_printf(NULL));
	printf("%d\n", printf(NULL));
}

