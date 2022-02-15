# include<stdio.h>
# include<string.h>
# include<stdlib.h>

int main(int c, char **v)
{
    int p_num;

    if (c != 2)
    {
        printf("You have to insert only the positive number");
        exit(EXIT_FAILURE);
    }
    p_num = atoi(v[1]);
    if (p_num < 0)
    {
        printf("The number must be positive");
        exit(EXIT_FAILURE);
    }
    do
    {
        if (p_num % 2 == 0)
        {
            printf("%d", p_num);
            p_num = p_num / 2;
            printf(" / 2 = %d\n", p_num);
        }
        else
        {
            printf("%d", p_num);
            p_num = (p_num * 3) + 1;
            printf(" (%d * 3) + 1\n", p_num);
        }
    } while (p_num != 1);
    
}
