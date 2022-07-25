/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:13:47 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 12:58:52 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexptr(unsigned long long int n, int *ptr_j)
{
	char	c;

	if (n >= 16)
	{
		ft_puthexptr(n / 16, ptr_j);
		ft_puthexptr(n % 16, ptr_j);
	}
	else
	{
		c = "0123456789abcdef"[n];
		ft_putchar(c, ptr_j);
	}
}
