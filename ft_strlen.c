/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:15:40 by aclement          #+#    #+#             */
/*   Updated: 2019/11/05 12:07:04 by aclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t longueur;

	longueur = 0;
	while (s[longueur] != '\0')
	{
		longueur = longueur + 1;
	}
	return (longueur);
}
