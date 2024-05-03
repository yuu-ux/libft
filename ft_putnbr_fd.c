/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:23:57 by yehara            #+#    #+#             */
/*   Updated: 2024/05/01 22:07:19 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *str;
    str = ft_itoa(n);
    write(fd, str, ft_strlen(str));
}

int main(void)
{
    int fd;

    fd = open("file.txt", O_RDWR | O_CREAT, S_IREAD | S_IWRITE);
    ft_putnbr_fd(8, fd);
    close(fd);
}
