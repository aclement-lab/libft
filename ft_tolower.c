/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:43:36 by aclement          #+#    #+#             */
/*   Updated: 2019/11/06 11:51:20 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		return (c + 32);
	return (c);
}

int	main(void)
{
	char test;

	test = '&';
	printf("%c\n", ft_tolower(test));
	return (0);
}
