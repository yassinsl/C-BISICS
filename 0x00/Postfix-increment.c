#include <stdio.h>
int main (void)
{
        int x = 5, y = 10, z = 15;
        
    // 1. Postfix increment 'x' and assign the result to 'y'.
    // Print the values of 'x' and 'y'.
    y = x++;
    printf ("x :%d , y :%d\n",x,y);// x = 6 , y = 5;

    // 2. Prefix decrement 'y' and assign the result to 'z'.
    // Print the values of 'y' and 'z'.
    z = --y;
    printf("y :%d , z :%d\n",y,z); // y = 4 ; z = 4;
    // 3. Postfix increment 'z' and assign the result to 'x'.
    // Print the values of 'z' and 'x'.
    x = z++;
    printf("x :%d , z :%d\n",x,z); // x=4; z = 5;
    
    // 4. Prefix decrement 'x' and assign the result to 'y'.
    // Print the values of 'x' and 'y'.
    y = ++x;
    printf ("x :%d , y :%d\n",x,y);// x = 5 , y = 5;  
        // 6. Prefix decrement 'z' and assign the result to 'x'.
    // Print the values of 'z' and 'x'.
    x = --z;
     printf("x :%d , z :%d\n",x,z); // x=4; z = 4;
}