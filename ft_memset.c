/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:12:12 by yehara            #+#    #+#             */
/*   Updated: 2024/04/17 20:44:07 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	buffer[] = "This is a test of the memset function";
// 	char	ft_b[] = "This is a test of the memset function";

// 	printf("Before: %s\n", buffer);
// 	printf("Before: %s\n", ft_b);
// 	memset(buffer, 'a', 4);
// 	for (int i = 0; i < 50; i++)
// 		printf("-");
// 	printf("\n");
// 	ft_memset(ft_b, 'a', 4);
// 	printf("After:  %s\n", buffer);
// 	printf("After:  %s\n", ft_b);
// }