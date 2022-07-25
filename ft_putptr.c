/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:14:47 by gkord             #+#    #+#             */
/*   Updated: 2021/12/04 12:58:52 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *ptr_j)
{
	unsigned long long int	n;

	n = (unsigned long long int) ptr;
	ft_putchar('0', ptr_j);
	ft_putchar('x', ptr_j);
	ft_puthexptr(n, ptr_j);
}
