/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:12:02 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 12:58:52 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n, int *ptr_j)
{
	if (n >= 10)
	{
		ft_putunsignednbr(n / 10, ptr_j);
		ft_putunsignednbr(n % 10, ptr_j);
	}
	else
		ft_putchar(n + '0', ptr_j);
}
