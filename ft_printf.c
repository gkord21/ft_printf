/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:08:27 by gkord             #+#    #+#             */
/*   Updated: 2021/12/05 15:16:37 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_op_int(int n, int *ptr_j, char c)
{
	if (c == 'c')
		ft_putchar(n, ptr_j);
	else if (c == 'i' || c == 'd')
		ft_putnbr(n, ptr_j);
	return (2);
}

static int	ft_op_ui(unsigned int un, int *ptr_j, char c)
{
	if (c == 'u')
		ft_putunsignednbr(un, ptr_j);
	else if (c == 'x')
		ft_putlowhexnbr(un, ptr_j);
	else if (c == 'X')
		ft_putuphexnbr(un, ptr_j);
	return (2);
}

static int	ft_op_void(void *ptr, int *ptr_j, char c)
{
	if (c == 's')
		ft_putstr((char *)ptr, ptr_j);
	else if (c == 'p')
		ft_putptr(ptr, ptr_j);
	return (2);
}

int	ft_printf(const char *c, ...)
{
	va_list	ptr;
	t_index	s;

	va_start(ptr, c);
	s.i = 0;
	s.j = 0;
	s.ptr_j = &s.j;
	while (c[s.i])
	{
		if (c[s.i] == '%' && (c[s.i + 1] == 'c' || c[s.i + 1] == 'i' \
		|| c[s.i + 1] == 'd'))
			s.i += ft_op_int(va_arg(ptr, int), s.ptr_j, c[s.i + 1]);
		else if (c[s.i] == '%' && c[s.i + 1] == '%')
			s.i += (ft_putchar('%', s.ptr_j) + 1);
		else if (c[s.i] == '%' && (c[s.i + 1] == 's' || c[s.i + 1] == 'p'))
			s.i += ft_op_void(va_arg(ptr, void *), s.ptr_j, c[s.i + 1]);
		else if (c[s.i] == '%' && (c[s.i + 1] == 'u' || c[s.i + 1] == 'x' \
		|| c[s.i + 1] == 'X'))
			s.i += ft_op_ui(va_arg(ptr, unsigned int), s.ptr_j, c[s.i + 1]);
		else
			s.i += ft_putchar(c[s.i], s.ptr_j);
	}
	va_end(ptr);
	return (s.j);
}
