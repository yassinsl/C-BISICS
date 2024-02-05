#include <unistd.h>

int main(int argc, char **argv) 
{
    /*
    int i = 0;
    while(argv[0][i])
    {
        write(1,&argv[0][i],1);
        i++;
    }
    */
    while(**argv)
    {
        write(1,*argv,1);
        (*argv)++;
    }
    write(1,"\n",1);
}