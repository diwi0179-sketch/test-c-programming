#include <stdio.h>


int main(void){

    int a = 1;
    int b = 1;
    int c;

    while(a <= 9)
    {
       printf("\n%4s%d단\n\n", " ",a);
       b = 1;

        while(b <= 9)
        {
            c = a * b ;
            printf("%d x %d = %d\n",a,b,c);
            b++;


        }
        a++;
    }




    return 0;
}
