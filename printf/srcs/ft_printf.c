/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argafary <argafary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:05:40 by argafary          #+#    #+#             */
/*   Updated: 2022/03/23 20:07:01 by argafary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		done;

	if (!format)
		return (0);
	done = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's' || *format == 'd' || *format == 'i'
				|| *format == 'c' || *format == 'x' || *format == 'X'
				|| *format == 'u' || *format == 'p' || *format == '%')
				done += ft_check_format(format, &args);
		}
		else
			done += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (done);
}
