#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		len += ft_print_hex(num / 16, format);
	len += write(1, &base[num % 16], 1);
	return (len);
}

static int	ft_print_ptr_hex(unsigned long long num)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		len += ft_print_ptr_hex(num / 16);
	len += write(1, &base[num % 16], 1);
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_print_ptr_hex(ptr);
	return (len);
}
