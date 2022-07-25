/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:10:38 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 12:58:52 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ptr_j)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", ptr_j);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', ptr_j);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, ptr_j);
		ft_putnbr(n % 10, ptr_j);
	}
	else
		ft_putchar(n + '0', ptr_j);
}
