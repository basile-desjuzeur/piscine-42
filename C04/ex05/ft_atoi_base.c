/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:02:09 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/23 14:44:41 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base);
char	*process_string(char *str, char *base, int *sign);
int		string_to_int(char *str, char *base);
int		ft_atoi_base(char *str, char *base);
int		power(int base, int exponent);

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	sign;
	int	*pointer;

	size = check_base(base);
	sign = 1;
	pointer = &sign;
	if (!size)
		return (0);
	str = process_string(str, base, pointer);
	if (!str)
		return (0);
	return (sign * string_to_int(str, base));
}

/* Checks if base is valid i.e.
- does not contain invalid char
- does not contain redundant char
- contains more than 1 char
Returns
- 0 if invalid
- size of base otherwise*/
int	check_base(char *base)
{
	int	i;
	int	j;
	int	test_plus_minus;
	int	test_visible;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		test_plus_minus = (base[i] != '+' && base[i] != '-');
		test_visible = (' ' < base[i] && base[i] <= '~');
		if (!(test_plus_minus && test_visible))
			return (0);
		while (base[j] != '\0' && i != j)
		{
			if (base[j++] == base [i])
				return (0);
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

/* Takes only the interesting part of the string by :
- removing leading whitespaces
- summarizing - and + operators
- take all consecutive characters that are in base
Returns the substring  (eventually empty) followed by a \0*/
char	*process_string(char *str, char *base, int *sign)
{
	int	i;

	i = 0;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = *sign * -1;
		str++;
	}
	while (str[i] != '\0')
	{
		while (*base != '\0')
		{
			if (*base == str[i])
				break ;
			base++;
		}
		if (base == '\0')
			return (0);
		i++;
	}
	return (str);
}

/* Converts a string of characters in a number
- using the base to convert each character
- using the size of the base to multiply by the right power of the base
Returns the number*/
int	string_to_int(char *str, char *base)
{
	int	size;
	int	i;
	int	j;
	int	result;

	size = check_base(base);
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == str[i])
				break ;
			j++;
		}
		result = result * size + j;
		i++;
	}
	return (result);
}
