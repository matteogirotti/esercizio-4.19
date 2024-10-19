#include <stdio.h>

int main(void) {
    int num;
    int i;
    int prim=0;
    printf("inserisci un numero:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
        if(num%i==0)
            prim=1;
    if(prim)
            printf("%d non e' un numero primo\n", num);
    else
            printf("%d e' un numero primo\n", num);
}
