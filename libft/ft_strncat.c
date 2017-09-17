/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:44:16 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:44:17 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (str1[i])
		i++;
	while (*str2 && n > 0)
	{
		str1[i] = *(str2++);
		i++;
		n--;
	}
	str1[i] = '\0';
	return (str1);
}