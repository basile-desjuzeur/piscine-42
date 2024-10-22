/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:43:07 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 17:13:17 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* from C01*/

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		size_src;
	unsigned int		size_dest;
	unsigned int		count;

	count = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size <= size_dest)
	{
		return (size_src + size);
	}
	while (count < size - size_dest - 1 && src[count])
	{
		dest[size_dest + count] = src[count];
		count++;
	}
	dest[size_dest + count] = 0;
	return (size_src + size_dest);
}