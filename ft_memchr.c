/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:16:20 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:06:49 by yehara           ###   ########.fr       */
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
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == c)
			return (&(str[i]));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char * str = "ABC";
//     int ch = '\0';
//     size_t n = 3;
// 	printf("%s\n", memchr(str, ch, n));
// 	printf("%s\n", ft_memchr(str, ch, n));
//     return 0;
// }
