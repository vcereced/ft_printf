/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:17:53 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 22:23:35 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int ft_printf(char const *fmt, ...)
{
	va_list args;
    va_start(args, fmt);
	int	length;

	char * ptr;
	
	ptr = (char *)fmt;
	length = 0;
    while (*ptr != '\0') 
	{
        if (*ptr == '%' && ptr[1] == 'c') {
			ft_putchar_printf(va_arg(args, int), &length);
			ptr++;
			ptr++;
        }
		else if (*ptr == '%' && ptr[1] == 's')
		{
			ft_putstr_printf(va_arg(args, char *), &length);
			ptr++;
			ptr++;
		}
		else if (*ptr == '%' && ptr[1] == 'd')
		{
			ft_putnbr_printf(va_arg(args, int), &length);
			ptr++;
			ptr++;
		}
		else if (*ptr == '%' && ptr[1] == 'p')
		{
			ft_putnbr_base(va_arg(args, int), "01", &length);
			ptr++;
			ptr++;
		}
		else
		{
			ft_putchar_printf(*ptr, &length);
			ptr++;
		}
    }
 
    va_end(args);
	return (length);
}
