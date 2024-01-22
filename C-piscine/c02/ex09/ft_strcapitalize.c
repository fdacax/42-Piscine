/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:09:03 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:23:21 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_min(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_min(str, i);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
		{
			str[i] -= 32;
			i++;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

void	ft_min(char *str, int i)
{
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}
/*
int main()
{
    char x[] = "ola, tudo bem? 42palaras quarenta-e-duas,cinquenta+e+um";
    printf("%s\n", ft_strcapitalize(x));
}
*/
