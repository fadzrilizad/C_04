/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:19:57 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 14:59:45 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	*lower;
	char	*not_lower;
	int		a;
	int		b;

	lower = "abfdsfjskdf";
	not_lower = "AFSDFSdfse2ref";
	a = ft_str_is_lowercase(lower);
	b = ft_str_is_lowercase(not_lower);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
*/
