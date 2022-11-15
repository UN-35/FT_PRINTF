/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:01:33 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/15 13:55:23 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	run_it(char c, va_list s, int *count)
{
	if (c == 'c')
		ft_putchara(va_arg(s, int), count);
	else if (c == 's')
		ft_putstr(va_arg(s, char *), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putaddress(va_arg(s, unsigned long), count);
	}
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(s, int), count);
	else if (c == 'u')
		ft_putuint(va_arg(s, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_puthexa(va_arg(s, unsigned int), c, count);
	else if (c == '%')
		ft_putchara('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	a;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(a, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			run_it(str[i], a, &count);
		}
		else
			ft_putchara(str[i], &count);
		i++;
	}
	va_end(a);
	return (count);
}
