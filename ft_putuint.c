/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:33:02 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/12 21:55:38 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int nbr, int *count)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchara(nbr + '0', count);
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
}
