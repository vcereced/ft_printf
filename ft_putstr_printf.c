/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:33:39 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 20:27:31 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putstr_printf(char *s, int *length)
{
	size_t	i;

	i = 0;
	if (s == 0)
	{
		write(1, "(null)", 6);
		*length += 6;
	}
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar_printf(s[i], length);
			i++;
		}
	}
	
/*

	i = 0;
	while (s[i] != '\0' || s[i] != '%')
		write(1, &s[i++], 1);
*/
}