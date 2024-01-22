/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:03:35 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/27 13:39:26 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab( int *tab, int size)
{
	int	count_x;
	int	count_y;
	int	swap;

	count_x = 0;
	while (count_x < size)
	{
		count_y = count_x + 1;
		while (count_y < size)
		{
			if (tab[count_x] > tab[count_y])
			{
				swap = tab[count_x];
				tab[count_x] = tab[count_y];
				tab[count_y] = swap;
			}
			count_y++;
		}
		count_x++;
	}
}
/*
int main(void)
{
    int frase[] = {92, 18, 47, 36, 65, 94, 03, 21, 21, 0};
    ft_sort_int_tab(frase, 10);
    printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i", frase[0], 
    frase[1], frase[2], frase[3], frase[4], frase[5], frase[6],
    frase[7], frase[8], frase[9]);

}
*/
