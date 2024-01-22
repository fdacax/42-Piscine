/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:21 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/05 13:43:59 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		while (to_find[j] 
			&& str[i + j] 
			&& to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{  
    printf("1: %s\n", ft_strstr("dasdsasd", "asddsa"));
    printf("1: %s\n", strstr("asdsada", "qwesaz"));

}
*/
//procurar com o to_find em str
//comparando as strings