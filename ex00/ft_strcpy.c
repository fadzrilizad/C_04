/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:38:28 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 13:49:30 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
 {
 	char	*src;
 	char	dest[100];
 	char	*temp;

 	src = "-DDvjoGlaG";
 	temp = ft_strcpy(dest, src);
 	printf("%s\n", temp);
 	return (0);
}
*/
