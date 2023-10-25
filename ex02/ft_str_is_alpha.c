/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:05:16 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 14:08:33 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str2;
	int		a;
	int		b;

	str = "HelloWorld";
	str2 = "42kl";
	a = ft_str_is_alpha(str);
	b = ft_str_is_alpha(str2);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
*/
