/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:09:37 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 20:10:38 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	ft_putnbr_printf(int n, int *length)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_printf('-', length);
		num = num * -1;
	}
	if (num > 9)
	{
		ft_putnbr_printf(num / 10, length);
		ft_putchar_printf(num % 10 + '0', length);
	}
	else
	{
		ft_putchar_printf(num + '0', length);
	}
}