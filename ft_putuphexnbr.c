/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphexnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:13:15 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 13:09:42 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphexnbr(unsigned int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_putuphexnbr(n / 16, ptr_j);
		ft_putuphexnbr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789ABCDEF"[n];
		ft_putchar(c, ptr_j);
	}
}
