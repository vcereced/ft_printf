/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:45:28 by vcereced          #+#    #+#             */
/*   Updated: 2022/12/17 15:38:28 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr_printf(const char *s, int c)
{
	size_t	i;

	i = 0;
	/*if ((char)c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return ((char *)s + i);
	}*/
	while (s[i] != (char)c || s[i] != '\0')
	{
		i++;
	}
	return ((char *)s + i);
}
