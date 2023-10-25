/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:00:46 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:02:47 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*up;
	char	*low;
	int		a;
	int		b;

	up = "ASDFGHJK";
	low = "dfjskfjdfs";
	a = ft_str_is_uppercase(up);
	b = ft_str_is_uppercase(low);
	printf("upper %d\n", a);
	printf("lower %d\n", b);
	return (0);
}
*/
