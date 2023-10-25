/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:13:50 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:15:24 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[100] = "JFKSDFJKSDFJjdfkdsjf";
	char	*b;

	b = ft_strlowcase(a);
	printf("%s\n", b);
	return (0);
}
*/
