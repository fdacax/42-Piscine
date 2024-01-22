/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:04:58 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/27 13:27:15 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
/*
int main()
{

    char string[] ="abcdef";
    ft_strlen(string);
    printf("%i\n", ft_strlen(string));
}

//Escreva uma função que conte o número de caracteres 
//de uma string e que retorneo valor encontrado
*/
