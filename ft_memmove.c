/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:30:02 by yehara            #+#    #+#             */
/*   Updated: 2024/04/21 18:16:16 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*str;

	i = 0;
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (!dst && !str)
		return (NULL);
	if (str < dst)
	{
		while (count--)
		{
			dst[i + count] = str[i + count];
		}
		return (dst);
	}
	while (count--)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char str[] = "hello World";
// 	char ft_str[] = "hello World";
// 	printf("Before memmove: %s\n", str);
// 	printf("Before ft_memmove: %s\n", ft_str);

// 	// "hello" の "llo" の部分を先頭にコピー
// 	memmove(str, str + 6, 5);
// 	ft_memmove(ft_str, ft_str + 6, 5);

// 	printf("After memmove:  %s\n", str);
// 	printf("After ft_memmove:  %s\n", ft_str);

// 	return (0);
// }