/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesjuze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:21:44 by bdesjuze          #+#    #+#             */
/*   Updated: 2024/03/16 17:35:47 by bdesjuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
		int	temp;

		temp = *a;
		*a = *b;
		*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i <= size / 2)
	{
		ft_swap(tab + i, tab + size -1 - i);
		i++;
	}
}
/*
int	main()
{
	int test[] = {1,2,3,4,5};

	ft_rev_int_tab(test, 5);
	printf("%d",test[0]);
}*/
