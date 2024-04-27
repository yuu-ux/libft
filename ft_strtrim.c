/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:06:05 by yehara            #+#    #+#             */
/*   Updated: 2024/04/27 23:51:36 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t re_len;
    char *buf;

    i = 0;
    j = 0;
    
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1 != '\0')
	{
        result[i] = s1[i];
		if (s1[i] == set[j])
        	i++;
            j++;
        i++;
	}
    re_len = strlen(result);
	buf = (char *)malloc(re_len * sizeof(char));
    return (buf);
}

int main(void)
{
    /* 1 */ printf("1：%s\n", ft_strtrim("hello world", "world")); //"hello "
	// /* 2 */ printf("2：%s\n", ft_strtrim("hello world", "hello")); //" world"
	// /* 3 */ printf("3：%s\n", ft_strtrim("hello world", "")); //"hello world"
	// /* 4 */ printf("4：%s\n", ft_strtrim("", "")); //""
	// /* 5 */ printf("5：%s\n", ft_strtrim("    hello world     ", " ")); //"hello world"
	// /* 6 */ printf("6：%s\n", ft_strtrim(" \n\t\r    hello \n\t\r world     \r\t\n\t \r\n", " \n\t\r")); //"hello \n\t\r world"
	// /* 7 */ printf("7：%s\n", ft_strtrim("hello world", "abcdefghijklmnopqrstuvwxyz")); //" "
    return 0;
}