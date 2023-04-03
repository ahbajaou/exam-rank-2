#include <stdio.h>
#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int start = 0;
    int end = 0;
    int flag = 0;
    if (ac > 1)
    {
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        start = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        end = i;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while (av[1][i])
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                if (av[1][i] == '\0')
                    break;
                else
                    write(1," ",1);
            }
            flag = 1;
            write(1,&av[1][i],1);
            i++;
        }
        if (flag == 1)
            write(1," ",1);
        while (start < end)
            write(1,&av[1][start++],1);
    }
    write(1,"\n",1);
}
