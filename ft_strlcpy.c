/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:19:55 by yehara            #+#    #+#             */
/*   Updated: 2024/04/21 19:31:31 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *src)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			count;

	i = 0;
	count = 0;
	count = ft_strlen(src);
	if (size == 0)
		return (count);
	while (src != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (count);
}

// int	main(void)
// {
// 	char *dst = strdup("hello");
// 	char *ft_dst = strdup("hello");
// 	char *str = "world";

// 	printf("before: %s\n", dst);
// 	printf("ft_before: %s\n", ft_dst);
// 	printf("%lu\n", strlcpy(dst, str, 5));
// 	printf("%lu\n", ft_strlcpy(ft_dst, str, 5));
// 	printf("after: %s\n", dst);
// 	printf("ft_after: %s\n", ft_dst);
// 	return (0);
// }