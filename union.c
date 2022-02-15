/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:52:27 by zakaria           #+#    #+#             */
/*   Updated: 2022/02/16 00:27:20 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_strchr(char *str, char c, int index)
{
    int i;

    i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return(1);
    i++;
    }
    return(0);
}
int main(int ac, char **av)
{
    int i;
    int j;
    char *s1;
    char *s2;

    i = 0;
    j = 0;
    if(ac == 3)
    {
        s1 = av[1]; 
        while(s1[i])
            {
                //s1 = av[1];
                if(ft_strchr(s1, s1[i], i) == 0)
                        write(1, &s1[i], 1);
                i++;
            }
        s2= av[2];
        j = i;
        i = 0;
        while(s2[i])
        {
            if(ft_strchr(s2, s2[i], i) == 0)
                {
                    if(ft_strchr(s1, s2[i], j) == 0)
                        write(1, &s2[i], 1);

                }
           i++;
         }
    }
    write(1, "\n", 1);
}
