/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:13:48 by sel-kham          #+#    #+#             */
/*   Updated: 2022/03/05 04:25:42 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (-1);
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] - str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
