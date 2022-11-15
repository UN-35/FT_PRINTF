/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:09:27 by yoelansa          #+#    #+#             */
/*   Updated: 2022/11/13 12:56:35 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchara(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_puthexa(unsigned int i, char form, int *count);
void	ft_putaddress(unsigned long i, int *count);
void	ft_putuint(unsigned int nbr, int *count);

#endif