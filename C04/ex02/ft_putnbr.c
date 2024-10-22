/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:45:24 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 18:26:25 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	hyphen;
	int		quotient;
	int		reste;

	hyphen = '-';
	if (nb < 0)
	{
		write(1, &hyphen, 1);
		nb = -1 * nb;
	}
	quotient = nb / 10;
	reste = nb % 10;
	if (quotient != 0)
		ft_putnbr(quotient);
	reste = reste + '0';
	write(1, &reste, 1);
}
