/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:18 by yehara            #+#    #+#             */
/*   Updated: 2024/05/04 23:01:10 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	
	//1文字だった場合 '\0'まで比べたいから二つ比較したい
	//対応する文字がない場合 '\0'まで比較しちゃうと'\0'が絶対引っかかって文字が帰ってくる
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&(s[len]));
		len--;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *str = "tripouille";
// 	int c = 'z';

// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// 	return (0);
// }

	// signal(SIGSEGV, sigsegv);
	// title("ft_strrchr\t: ")
	// char s[] = "tripouille";
	// char s2[] = "ltripouiel";
	// char s3[] = "";
	// /* 1 */ check(ft_strrchr(s, 't') == s); showLeaks();
	// /* 2 */ check(ft_strrchr(s, 'l') == s + 8); showLeaks();
	// /* 3 */ check(ft_strrchr(s2, 'l') == s2 + 9); showLeaks();
	// /* 4 */ check(ft_strrchr(s, 'z') == NULL); showLeaks();
	// /* 5 */ check(ft_strrchr(s, 0) == s + strlen(s)); showLeaks();
	// /* 6 */ check(ft_strrchr(s, 't' + 256) == s); showLeaks();
	// char * empty = (char*)calloc(1, 1);
	// /* 7 aperez-b */ check(ft_strrchr(empty, 'V') == NULL); free(empty); showLeaks();
	// /* 8 */ check(ft_strrchr(s3, 0) == s3); showLeaks();
	// write(1, "\n", 1);
	// return (0);