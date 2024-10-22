/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:07:08 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 17:27:50 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*first functions are copied from preivous ex*/
int	compare_chars(char *c1, char *c2)
{
	if (*c1 < *c2)
	{
		return (-1);
	}
	if (*c1 > *c2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* while characters are the same, none of the strings are finished, 
and we compared less than n characters we keep going*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (!compare_chars(s1, s2) && (*s1 != '\0') && (*s2 != '\0') && (i < n))
	{
		s1++;
		s2++;
		i++;
	}
	return (compare_chars(s1, s2));
}

/* outputs the number of char in str, excluding final \0)*/
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

/* we could have stopped the sliding window before*/
char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (!ft_strncmp(str, to_find, ft_strlen(to_find)))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
