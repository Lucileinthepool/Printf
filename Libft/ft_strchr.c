/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucilla <lucilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:07:42 by lufreder          #+#    #+#             */
/*   Updated: 2023/11/06 14:34:59 by lucilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	else
		return (NULL);
}

/*#include<stdio.h>

int main(void)
{
	char	c = ' ';
	char	s[20] = "Hello";

	ft_strchr(s, c);

	printf("%c", c);
	return (0);
}
*/