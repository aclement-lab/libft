/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:30:17 by aclement          #+#    #+#             */
/*   Updated: 2019/11/06 10:20:06 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else if (((c >= 'a') && (c <= 'z')) || ((c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}

int	main(void)
{
	int test;

	test = 'a';
	printf("%d\n", ft_isalnum(test));
	return (0);
}
