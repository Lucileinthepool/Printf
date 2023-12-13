/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufreder <lufreder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:53:24 by lufreder          #+#    #+#             */
/*   Updated: 2023/11/29 13:59:47 by lufreder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	count;
	int	i;
	va_start(args, s);

	i = 0;
	// 1. Si l'élément entré est un char %c -- CHAR
	while (s[i])
	{
		count = va_arg(args, char *);
		write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
// 2. Si l'élément entré est une chaine de char %s -- STRING
// 3. Si l'élément entré est un void * pointer %p -- ADRESS OF POINTER 
// OR ANy OTHER VAR
// 4. Si l'élément entré est un décimal %d -- INT
// 5. Si l'élément entré est un entier %i -- INT
// 6. Si l'élément entré est un décimal positif (base 10) %u -- unsigned INT
// 7. Si l'élément entré est un nombre hexadécimal (base 16) lowercase %x 
// -- unsigned int hexadecimal
// 8. Si l'élément entré est un nombre hexadécimal (base 16) uppercase %x 
// -- unsigned int hexadecimal
// 9. Si l'élément entré est le signe pourcentage
}
float	average(int num, ...)
{
	va_list	args;
	int	total;
	int i;
	
	total = 0;
	va_start(args, num);

	i = 0;
	while (i < num)
	{
		total += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (float)total/num;
}

int main(void)
{
	printf("the average is %.2f\n", average(5, 3, 4, 5, 6, 7));
	return (0);
}