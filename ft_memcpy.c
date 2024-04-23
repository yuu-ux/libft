/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:31 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:06:51 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUF_SIZE 16

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*s;

	i = 0;
	str = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

// int main(void)
// {
//     size_t num = 6;
//     char *src = "hello";
//     char *ft_src = "hello";
//     char dst[BUF_SIZE];
//     char ft_dst[BUF_SIZE];

//     printf("コピー前: %s\n", dst);
//     printf("コピー前: %s\n", ft_dst);
//     memcpy(dst, src, num);
//     ft_memcpy(ft_dst, ft_src, num);
//     printf("コピー後: %s\n", dst);
//     printf("コピー後: %s\n", ft_dst);
//     return (0);
// }