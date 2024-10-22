/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:00:48 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/23 12:00:22 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base);
int	is_valid_character(char character);

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = check_base(base);
	if (size)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -1 * nbr;
		}
		while (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			nbr = nbr % size;
		}
		write(1, &base[nbr], 1);
	}
}

/* Checks if base is valid i.e.
- does not contain invalid char (cf. infra)
- does not contain redundant char
- contains more than 1 char
Returns
- 0 if invalid
- size of base otherwise*/
int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0' && is_valid_character(base[i]))
	{
		j = 0;
		while (base[j] != '\0' && i != j)
		{
			if (base[j] == base [i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i < 2)
	{
		return (0);
	}
	return (i);
}

/*Checks if a base contains only valid char :
- no + or -
- only visible char (not specified but logical*/
int	is_valid_character(char character)
{
	int	test_plus_minus;
	int	test_visible;

	test_plus_minus = (character != '+' && character != '-');
	test_visible = (' ' < character && character <= '~');
	return (test_plus_minus && test_visible);
}
