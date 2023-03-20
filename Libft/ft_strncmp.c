/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:03 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/19 23:15:47 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while ((s1[cnt] || s2[cnt]) && (cnt < n))
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt += 1;
	}
	return (0);
}
