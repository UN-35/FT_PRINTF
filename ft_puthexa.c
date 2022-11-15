/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:13:58 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/13 12:30:20 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int i, char form, int *count)
{
	if (i >= 0 && i <= 9)
		ft_putchara(i + '0', count);
	else if (i < 16 && form == 'x')
		ft_putchara(i + 87, count);
	else if (i < 16 && form == 'X')
		ft_putchara(i + 55, count);
	else if (i >= 16)
	{
		ft_puthexa(i / 16, form, count);
		ft_puthexa(i % 16, form, count);
	}
}
