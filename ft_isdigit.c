/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:17:37 by aclement          #+#    #+#             */
/*   Updated: 2019/11/07 16:59:19 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	return (0);
}

int	main(void)
{
	int chiffre;

	chiffre = '@';
	printf("%d\n", ft_isdigit(chiffre));
	return (0);
}
