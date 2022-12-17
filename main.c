#include "ft_printf.h"

int main(void)
{
	
	printf("la mia devuelve: %i\n", ft_printf(" %p ", 16));
	printf("la REAL devuelve: %i", printf(" %p ", 16));
	//char    base [] = "0123456789abcdef";
	
	//ft_putnbr_base(10, base);
	
	
	
	
	return (0);
}
 
 /*
int main(void)
{
     int     nbr;
     char    base [] = "0123456789ABCDEF";

     nbr = 16;
     ft_putnbr_base(nbr, base);
     return (0);
}*/
