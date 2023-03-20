/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:51 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 16:58:16 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	string_length;
	char			*str;
	int				idx;

	string_length = ft_strlen(s);
	if (start + len > string_length - 1)
		return ((void *)0);
	str = (char *)malloc(sizeof(char) * len);
	idx = 0;
	while (str[idx])
		str[idx++] = s[start + idx];
	return (str);
}
