/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:57:58 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 17:26:14 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*pointer;
	unsigned int		counter;

	pointer = dest;
	counter = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && counter < nb)
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	*dest = '\0';
	return (pointer);
}
