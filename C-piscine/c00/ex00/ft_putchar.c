/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:11:04 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/22 12:13:02 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("digite uma letra\n");
	char c;
	scanf("%c", &c);
	ft_putchar(c);
}*/
