#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	num;
	int		len;
	char	c;

	num = n;
	len = 0;
	if (num < 0)
	{
		len += write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		len += ft_print_nbr(num / 10);
	c = (num % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n > 9)
		len += ft_print_unsigned(n / 10);
	c = (n % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
