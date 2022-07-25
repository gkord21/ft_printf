/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:10:05 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 12:58:52 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *ptr_j)
{
	size_t	i;

	if (!s)
	{
		write (1, "(null)", 6);
		*ptr_j += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], ptr_j);
		i++;
	}
}