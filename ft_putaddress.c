/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:28:31 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/12 21:55:16 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long i, int *count)
{
	if (i >= 0 && i <= 9)
		ft_putchara(i + 48, count);
	else if (i < 16)
		ft_putchara(i + 87, count);
	else if (i >= 16)
	{
		ft_putaddress(i / 16, count);
		ft_putaddress(i % 16, count);
	}
}
