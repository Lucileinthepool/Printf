/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucilla <lucilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:15:37 by lufreder          #+#    #+#             */
/*   Updated: 2023/11/06 14:47:18 by lucilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (void *)malloc (count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	count = 4;
	size_t	size = 6;
	
	printf("The result is %p/n", ft_calloc(count, size));
	return (0);
}*/