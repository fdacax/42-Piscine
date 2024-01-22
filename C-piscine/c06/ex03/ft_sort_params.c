/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:49:44 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/02 11:50:04 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i]
		&& (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort(char **tab, int argc)
{
	char	*swap;
	int		x;
	int		y;

	x = 0;
	while (x < argc)
	{
		y = x +1;
		while (y < argc)
		{
			if (compare (tab[x], tab[y]) > 0)
			{
				swap = tab[x];
				tab[x] = tab[y];
				tab[y] = swap;
			}
			y++;
		}
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	sort (&argv[1], argc -1);
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
