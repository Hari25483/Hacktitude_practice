#include <stdio.h>
#include <stdlib.h>

int main() {
    int count=4,a=1000;
    do{
        a/=count;
        printf("%d\n",a);
        // a=250
        //a=83
        // a=41
        // a=41
        // a=0
    }
    while (count--);
    //This while loop will stop when the value of count=0 because of while(0)=>while(false).
    return 0;

}