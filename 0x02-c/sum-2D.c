#include <stdio.h>

int main (void)
{
    int a[10][10];
    int rows , columns, i, j, sumarr = 0;

    printf("Please enter the number of rows in the array: ");
        scanf("%d", &rows);
    
    printf("Please enter the number of columns in the array: ");
        scanf("%d", &columns);

    printf("The number of rows is %d and number the columns is %d\n", rows, columns);
    
   
    for (i =0 ; i < rows; i++)
{
  for (j = 0 ; j < columns; j++)
    {
    printf("a[%d][%d] = ", i + 1, j + 1);
        scanf("%d",&a[i][j]);
     sumarr = sumarr + a[i][j];
    }
}
    printf("sum the array is : %d\n", sumarr);
return (0);
}