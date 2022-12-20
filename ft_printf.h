/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:14:49 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/20 20:17:19 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *fmt, ...);
void	ft_putstr_printf(char *s, int *length);
void	ft_putnbr_printf(long nbrl, char *base, int *len, char ptr);

#endif