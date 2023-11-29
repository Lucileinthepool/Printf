/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucilla <lucilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:58:54 by lufreder          #+#    #+#             */
/*   Updated: 2023/11/06 14:35:39 by lucilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>

int main(void)
{
	char	target = 'l';
	char	s[20] = "Aloha";

	ft_strrchr(s, target);
	printf("%c", target);
	return (0);
}*/