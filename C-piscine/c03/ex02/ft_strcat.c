/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:37:42 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/05 13:35:03 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	dest_len = i;
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
	char y[] = "Eh o braia";
	char x[25] = "eh ele mesmo!";

	printf("%s",ft_strcat( x, y));
}
*/
