/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:37:44 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/01 21:38:05 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc -= 1;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] > 0)
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argc--;
	}
}

//argc tem que ir voltando ate o primeiro argv