/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:19:57 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/21 17:10:57 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[cnt] && cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	dest[cnt] = '\0';
	return (ft_strlen(src));
}
