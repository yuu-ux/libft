/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:42:27 by yehara            #+#    #+#             */
/*   Updated: 2024/04/28 16:45:35 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	str[50] = "hello world";
// 	char	ft_str[50] = "hello world";
// 	size_t	num;

// 	num = 1;
// 	printf("before str: %s\n", str);
// 	printf("before ft_str: %s\n", ft_str);
// 	bzero(str, num);
// 	ft_bzero(ft_str, num);
// 	printf("after str: %s\n", str);
// 	printf("after ft_str: %s\n", ft_str);
// }
