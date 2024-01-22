/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:36:22 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/27 13:33:27 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	count = 0;
	while (count < size / 2)
	{
		swap = tab[count];
		tab[count] = tab[size -1 - count];
		tab[size -1 - count] = swap;
		count++;
	}
}

/*
 int main ()         
{
    int frase[6] = {1,2,3,4,5,6};
    ft_rev_int_tab(frase, 6);
    printf("%i%i%i%i%i%i", frase [0], frase[1]
    , frase[2], frase[3], frase[4], frase[5], frase[6]);
}
*/
