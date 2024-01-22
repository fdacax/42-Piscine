/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:04:32 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/05 13:37:33 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	dest_len = i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
int main()
{
	char y[] = "Eh o braia";
	char x[25] = "eh ele mesmo!";
	unsigned int z = 4;
	printf("%s",ft_strncat( x, y, z));
}*/
