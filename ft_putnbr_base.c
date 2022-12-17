/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:52:12 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 20:33:00 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	recursiva(long nbr, int size, char *base, int *length)
{
  	if (nbr >= size)
    {
		recursiva((nbr / size), size, base, length);
        ft_putchar_printf(base[nbr % size], length);

    }
    else
        ft_putchar_printf(base[nbr % size], length);
}

void	ft_putnbr_base(int nbr, char *base, int *length)
{
    int     size;
    long    nbrl;

    nbrl = (long)nbr;
    size = 0;
    while (base[size] != '\0')
        size++;
/*    if (nbrl < 0)
    {
        ft_putchar_printf('-', length);
        nbrl *= -1;
    }*/
    ft_putchar_printf('0', length);
    ft_putchar_printf('x', length);
    if (nbrl >= size)
    {
        recursiva(nbrl, size, base, length);
    }
    else
    {
        ft_putchar_printf(base[nbrl % size], length);
	}
}

