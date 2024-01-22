/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:03:56 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/05 13:32:28 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n -1
		&& (s1[i] || s2[i])
		&& (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    printf( "%i", ft_strncmp("teste", "teste", 4));
}

// compara 2 strings 
// se s1 < s2  return  (-)
// se s1 == s2 return  (0)
// se s1 > s2  return  (+)
// */
