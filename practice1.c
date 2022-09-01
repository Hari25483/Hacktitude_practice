#include <stdio.h>
int main() {
    int a=1;
    int b=0;

    while(a<10){
        a=a+8*b++;
        printf("%d\n",a);
    }
}