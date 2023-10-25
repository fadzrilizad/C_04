/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:06:47 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:12:24 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "ZSGSDFRSfserRWR";
	char	b[] = "jfkddferwerewrfsfsewrwf";
	char	*c;
	char	*d;

	c = ft_strupcase(a);
	d = ft_strupcase(b);
	printf("%s\n", c);
	printf("%s\n", d);
	return (0);
}
*/
