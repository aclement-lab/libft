/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:59:56 by aclement          #+#    #+#             */
/*   Updated: 2019/11/06 11:42:35 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	return (c);
}

int	main(void)
{
	char test;

	test = '!';
	printf("%c\n", ft_toupper(test));
	return (0);
}
