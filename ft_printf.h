/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:21:40 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 20:09:24 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


int		ft_printf(char const *, ...);
void	ft_putstr_printf(char *s, int *length);
void	ft_putchar_printf(char c, int *length);
char	*ft_strchr_printf(const char *s, int c);
char	*ft_itoa_printf(int n);
void	ft_putnbr_printf(int n, int *length);
void    ft_putnbr_base(int nbr, char *base, int *length);

#endif