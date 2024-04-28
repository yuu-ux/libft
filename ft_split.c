/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:56:49 by yehara            #+#    #+#             */
/*   Updated: 2024/04/28 20:34:54 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    
	while (*s)
    {
        if (*s == c)
        {
            s++;
        }
    }

}
int main(void)
{
    char *expected[] = {"hello","world","42","tokyo", NULL};
	/* 1 ~ 5 */ printf(ft_split("hello,world,42,tokyo", ','));
	/* 6 ~ 10 */ printf(ft_split("hello world 42 tokyo", ' '));
	/* 11 ~ 15 */ printf(ft_split(",,,hello,,,world,,,42,,,tokyo,,,,", ','));

	char *expected2[] = {"hello,world,42,tokyo", NULL};
	/* 16 ~ 17 */ printf(ft_split("hello,world,42,tokyo", ' '));
	/* 18 ~ 19 */ printf(ft_split("hello,world,42,tokyo", '{'));

	char *expected3[] = {NULL};
	/* 20 */ printf(ft_split("", ','));

	// Segmentation Fault
	// /* 21 */ assert_str_array(ft_split(NULL, ','), expected3);
}