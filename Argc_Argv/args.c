#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    /*
    int i = 0,j;
    while(argv[i])
     {
        j = 0;
        while(argv[i][j])
        {
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
        i++;
     }
     */
     while(i <argc)
     {
    while(**argv)
     {
        write(1,*argv,1);
        (*argv)++;
     }
      write(1,"\n",1);
      (*argv)++;
       i++;
     }
} 