/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 14:49:54 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:51:45 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_fd.h"

static void	write_hex_lower_fd(const int fd, unsigned int n)
{
	const char	*digits = "0123456789abcdef";
	char		c;

	if (n > 15)
		write_hex_lower_fd(fd, (n / 16));
	c = digits[n % 16];
	write(fd, &c, 1);
}

static void	write_hex_upper_fd(const int fd, unsigned int n)
{
	const char	*digits = "0123456789ABCDEF";
	char		c;

	if (n > 15)
		write_hex_upper_fd(fd, (n / 16));
	c = digits[n % 16];
	write(fd, &c, 1);
}

int	print_hex_upper_fd(const int fd, unsigned int n)
{
	write_hex_upper_fd(fd, n);
	return (ft_hexlen(n));
}

int	print_hex_lower_fd(const int fd, unsigned int n)
{
	write_hex_lower_fd(fd, n);
	return (ft_hexlen(n));
}
