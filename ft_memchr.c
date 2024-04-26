/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:16:20 by yehara            #+#    #+#             */
/*   Updated: 2024/04/27 00:01:33 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char *)s;
	search = (unsigned char)c;
	i = 0;
	while (str[i] != '\0' || i < n)
	{
		if (str[i] == search)
			return (&(str[i]));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *str = "s";
//     int ch = '\0';
//     size_t n = 30;
// 	printf("%s\n", memchr(str, ch, n));
// 	printf("%s\n", ft_memchr(str, ch, n));
//     return (0);
// }

// /* 17 */ (ft_memchr(s, '\0', 30), memchr(s, '\0', 30));
// /* 24 */ (ft_memchr(s, 'a', 30), memchr(s, 'a', 30));
// /* 25 */ (ft_memchr(s, 'c', 30), memchr(s, 'c', 30));
// /* 26 */ (ft_memchr(s, 'd', 30), memchr(s, 'd', 30));
// /* 28 */ (ft_memchr(s, 'g', 30), memchr(s, 'g', 30));
