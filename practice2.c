#include <stdio.h>
#include <stdlib.h>

int main() {
    int * p1,*p2;
    p1=malloc(sizeof(int));
    p2=p1;
    *p2=120;
    printf("%d",*p1);
}