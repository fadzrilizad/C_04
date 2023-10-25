/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:12:36 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 14:15:13 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	*a;
	char	*b;
	int		a1;
	int		b1;

	a = "123456789";
	b = "*&^*&232432";
	a1 = ft_str_is_numeric(a);
	b1 = ft_str_is_numeric(b);
	printf("a = %d\n", a1);
	printf("b = %d\n", b1);
	return (0);
}
*/
