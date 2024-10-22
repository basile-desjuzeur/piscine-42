/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:19:19 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 17:24:34 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

	if (n == 0)
		return (0);
	i = 0;
	while (!compare_chars(s1, s2) && (*s1 != '\0') && (*s2 != '\0') && (i < n))
	{
		s1++;
		s2++;
		i++;
	}
	return (compare_chars(s1, s2));
}
