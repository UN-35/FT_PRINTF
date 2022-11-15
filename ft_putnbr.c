/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:57:27 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/13 12:38:17 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", count);
	else if (nbr >= 0 && nbr <= 9)
		ft_putchara(nbr + '0', count);
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
	else if (nbr < 0)
	{
		ft_putchara('-', count);
		ft_putnbr(-nbr, count);
	}
}
