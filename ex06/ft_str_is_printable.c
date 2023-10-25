/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:04:17 by fizad             #+#    #+#             */
/*   Updated: 2023/08/17 15:05:38 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*a;
	char	*b;
	int		a1;
	int		a2;

	a = "1234567890iokjnbgfty8yyuu%$&&*^&*((";
	b = "\n\t\r";
	a1 = ft_str_is_printable(a);
	a2 = ft_str_is_printable(b);
	printf("a = %d\n", a1);
	printf("b = %d\n", a2);
	return (0);
}
*/
