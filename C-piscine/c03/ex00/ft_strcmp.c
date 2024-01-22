/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:16:44 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/05 13:30:04 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2 )
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
/*
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 3)
    {
    printf("%d\n", ft_strcmp(argv[1], argv[2]));
    }
    else 
    printf("ERRO, Falta argumento");
}
*/

// compara 2 strings 
// se s1 < s2   return  (-)
// se s1 == s2  return  (0)
// se  s1 > s2  return  (+)
 
