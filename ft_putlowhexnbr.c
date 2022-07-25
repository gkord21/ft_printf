/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhexnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:12:38 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 13:09:50 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlowhexnbr(unsigned int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_putlowhexnbr(n / 16, ptr_j);
		ft_putlowhexnbr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789abcdef"[n];
		ft_putchar(c, ptr_j);
	}
}
