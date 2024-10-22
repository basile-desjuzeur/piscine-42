/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:10:51 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/16 16:23:22 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main(void)
{
	char	chain[] = "\0";
	int  	count;

	count = ft_strlen(chain);
}
*/
