/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufreder <lufreder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:53:24 by lufreder          #+#    #+#             */
/*   Updated: 2023/11/28 16:45:01 by lufreder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printf(const char *)
// {
// 1. Si l'élément entré est un char %c -- CHAR
// 2. Si l'élément entré est une chaine de char %s -- STRING
// 3. Si l'élément entré est un void * pointer %p -- ADRESS OF POINTER OR ANy OTHER VAR
// 4. Si l'élément entré est un décimal %d -- INT
// 5. Si l'élément entré est un entier %i -- INT
// 6. Si l'élément entré est un décimal positif (base 10) %u -- unsigned INT
// 7. Si l'élément entré est un nombre hexadécimal (base 16) lowercase %x -- unsigned int hexadecimal
// 8. Si l'élément entré est un nombre hexadécimal (base 16) uppercase %x -- unsigned int hexadecimal
// 9. Si l'élément entré est le signe pourcentage
// }

// int	main(void)
// {
// 	printf("Hello World\n");
// 	printf("Hello %s", "World\n");
// 	return (0);
// }

int	sum(int count, ...)
{
	va_list	args;//where the arguments will be stored
	va_start(args, count);//initialise the va_list, take the va_list args and first parameter of function, here count
	
	int	i = 0;
	int	s = 0;

	while (i < count)//tant que i est inférieur au compte
	{
		i++;//avancer dans l'index
		int x = va_arg(args, int);//pass the type that I expect, here integer
		s += x;//s = s + x
	}
	va_end(args);//always ends the va_list
	return (s);
}

int	sum2(int a, ...)
{
	va_list	args;//where the arguments will be stored
	va_start(args, a);//initialise the va_list, take the va_list args and first parameter of function, here count
	
	int	s = a;
	int x = va_arg(args, int);//pass the type that I expect, here integer

	while (x != '\0')//tant que i est inférieur au compte
	{
		s += x;//s = s + x
		x = va_arg(args, int);
	}
	va_end(args);//always ends the va_list
	return (s);
}

int main(int argc, char *argv[])
{
    printf("Sum is: %d\n", sum(4, 1, 2, 3, 4));//count, int, int
	printf("Sum is: %d\n", sum2(1, 2, 3, 4, '\0'));
	return (0);
}