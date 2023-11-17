#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i;
    int *ptr;

    printf("please enter numbers of array :");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL)
    {
          printf("error\n");
          exit(1);
    }
    else
        {
            printf("please enter elements of array :\n");
        for(i = 0; i < n; i++)
        {
            printf("element-%d :",i);
            scanf("%d",ptr + i);
        }
        printf("element of array are  :\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ",*(ptr + i));
        }
            printf("\n");
        }
      free(ptr);
      return 0;
}