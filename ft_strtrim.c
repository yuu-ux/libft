/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:06:05 by yehara            #+#    #+#             */
/*   Updated: 2024/04/28 18:15:39 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//全体の文字数を数えて、トリム分の文字数をマイナスして、mallocで領域を確保する。
// 前からの文字数を数えて変数入れる、後ろからの文字を数えてもう一つの変数入れる。

size_t	front_trim_count(char const *s1, char const *set)
{
	size_t	count;
	const char *temp_set;

	count = 0;

	//jを動かしちゃダメなんだ。1回一致したから終わりじゃなくて、永久的にsetの値は探したいから
	while (*s1 != '\0')
	{
		temp_set = set;
		while (*temp_set != '\0')
		{
			if (ft_strchr(temp_set, *s1) == NULL)
				break;
			temp_set++;
		}
		count++;
		s1++;
	}
	return (count);
}

int	main(void)
{
	printf("%zd\n", front_trim_count("abc hello \n\t\r world     \r\t\n\t \r\n", " abc")); //4を返したい
	// /* 1 */ printf("1：%s\n", ft_strtrim("hello world", "world")); //"hello "
	// /* 2 */ printf("2：%s\n", ft_strtrim("hello world", "hello"));//" world"
	// /* 3 */ printf("3：%s\n", ft_strtrim("hello world", ""));//"hello world"
	// /* 4 */ printf("4：%s\n", ft_strtrim("", ""));//""
	// /* 5 */ printf("5：%s\n", ft_strtrim("    hello world     ", " "));//"hello world"
	// /* 6 */ printf("6：%s\n", ft_strtrim(" \n\t\r    hello \n\t\r world     \r\t\n\t \r\n", " \n\t\r"));//"hello \n\t\r world"
	// /* 7 */ printf("7：%s\n", ft_strtrim("hello world", "abcdefghijklmnopqrstuvwxyz"));//" "
	return (0);
}

// size_t end_trim_count(char const *s1, char const *set)
// {
// 	size_t count;
// 	size_t i;
// 	size_t j;

// 	count = 0;
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// }

// char	*trim(buf, s1, set, flag)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (flag == 1)
// 	{
// 		while (s1 != '\0')
// 		{
// 			buf[i] = s1[i];
// 			if (s1[i] == set[j])
// 				i++;
// 			j++;
// 			i++;
// 		}
// 	}
// 	else if (flag == 2)
// 	{
// 		while (s1 != '\0')
// 		{
// 			buf[i] = s1[i];
// 			if (s1[i] == set[j])
// 				i++;
// 			j++;
// 			i++;
// 		}
// 	}
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	s1_len;
// 	size_t	trim_front;
// 	size_t	trim_end;
// 	char	*buf;

// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	s1_len = ft_strlen(s1);
// 	trim_front = trim_count(s1, set, 1);
// 	trim_end = trim_count(s1, set, 2);
// 	buf = (char *)malloc(((s1_len - (trim_front + trim_end)) + 1)
// 			* sizeof(char));
// 	return (buf);
// }

