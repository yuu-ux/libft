/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:52:31 by yehara            #+#    #+#             */
/*   Updated: 2024/04/27 20:12:05 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
    size_t slen;
    size_t flen;
	char	*dst;

	i = 0;
	j = 0;
    
    if (!s)
    	return (0);
    slen = ft_strlen(s);
    if (slen < start)
    	flen = slen - start;
	while (i < start)
	{
		i++;
	}
	dst = (char *)malloc(len * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[j] = s[i];
		j++;
		i++;
	}
	return ((char *)dst);
}
int	main(void)
{
	char *s = "libft-test-tokyo";
	/* 1 */ printf("1：%s\n", ft_substr(s, 0, 100));
	/* 2 */ printf("2：%s\n", ft_substr(s + 5, 5, 100));
	/* 3 */ printf("3：%s\n", ft_substr(s + 10, 10, 100));
	/* 4 */ printf("4：%s\n", ft_substr(s + 15, 15, 100));
	/* 5 */ printf("5：%s\n", ft_substr("", 20, 100));
	/* 6 */ printf("6：%s\n", ft_substr("libft", 0, 5));
	/* 7 */ printf("7：%s\n", ft_substr("-test", 5, 5));
	/* 8 */ printf("8：%s\n", ft_substr("-toky", 10, 5));
	/* 9 */ printf("9：%s\n", ft_substr("o", 15, 5));
	/* 10 */ printf("10：%s\n", ft_substr("", 20, 5));
	/* 11 */ printf("11：%s\n", ft_substr("", 0, 0));
	/* 12 */ printf("12：%s\n", ft_substr("", 5, 0));
	/* 13 */ printf("13：%s\n", ft_substr("", 10, 0));
	/* 14 */ printf("14：%s\n", ft_substr("", 15, 0));
	/* 15 */ printf("15：%s\n", ft_substr("", 20, 0));
	return (0);
}