/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:16:46 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:18:30 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	p;

	ft_strlowercase(str);
	i = 0;
	p = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') & (str[i] <= 'z'))
		{
			if (p == 1)
				str[i] -= 32;
			p = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			p = 0;
		else
			p = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
 {
 	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
 	char *b = ft_strcapitalize(a);
 	printf("%s\n", b);
 	return (0);
 }
 */
