/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakinen <mmakinen@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:21:56 by mmakinen          #+#    #+#             */
/*   Updated: 2021/11/26 14:40:32 by mmakinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar('-');
	}
	if (ln > 9)
		ft_putnbr(ln / 10);
	ft_putchar(48 + (ln % 10));
}