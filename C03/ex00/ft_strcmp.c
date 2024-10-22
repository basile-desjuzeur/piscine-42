/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:19:19 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/21 17:26:50 by bdesjuze         ###   ########.fr       */
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

/* while characters are the same and none of the strings are finished, 
we keep going*/
int	ft_strcmp(char *s1, char *s2)
{
	while (!compare_chars(s1, s2) && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (compare_chars(s1, s2));
}
