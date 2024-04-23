/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:38:21 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 16:51:02 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *str)
{
    int i;
    char *result;
	
    i = 0;

	while (str[i] != '\0') {
		if (str[i] >= '1' && str[i] <= '9')
        //数字であれば1時変数に入れていく。
        //数字以外であればreturn 0する
    }
}

int main(void)
{
    char *str = "a124";
    printf("%d\n", atoi(str));
    return 0;
}
