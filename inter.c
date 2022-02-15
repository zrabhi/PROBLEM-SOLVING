#include <unistd.h>
#include <stdio.h>
int ft_strchr(char *str, char c)
{
   int i;

    i = 0;
    while(str[i])
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
    //j = 0;
    if(ac == 3)
    {
        s1 = av[1];
        s2 = av[2];
        while(s1[i])
        {
            if(ft_strchr(s1, s1[i]) ==0 )
            {
                j = 0;
                while(s2[j])
                {
                    if(s2[j] == s1[i])
                    {
                        write(1, &s1[i], 1);
                        break;
                    }
                j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
}