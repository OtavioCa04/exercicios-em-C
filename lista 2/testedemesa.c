#include <stdio.h>

int main(){
    int n1, n2, res, i;
    n1=8;
    n2=1;
    res=0;

    for (i = 0; i < 5; i++)
    {
        res=n1-n2;
        n1=res;
        n2=i;
    }
    printf("res=%d \n", res);
    printf("n1=%d \n", n1);
    printf("n2=%d \n", n2);
}