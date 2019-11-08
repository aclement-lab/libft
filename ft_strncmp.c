/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:54:59 by aclement          #+#    #+#             */
/*   Updated: 2019/11/08 17:56:52 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <libc.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{	
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
	i++;
	}
	return (s1[i] - s2[i]);

}

int	main(void)
{
	int resultat;

	resultat = strncmp("\0", "salut", 3);
	printf("%d\n", resultat);
	resultat = ft_strncmp("\0", "salut", 3);
	printf("%d\n", resultat);
	return (0);
}
