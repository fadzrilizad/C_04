/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:20:16 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:21:28 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[100] = "42kl";
	char src[] = "piscine";
	unsigned int a = ft_strlcpy(dest, src, 8);
	printf("%s\n", dest);
	printf("Intended copy character %u character\n", a);

	return (0);
}
*/
