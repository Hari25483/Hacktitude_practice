#include <stdio.h>

typedef enum {False,True} Bool;

int main() {
    int i=1;
    Bool b=True;
    do {
        printf("%d\n",i);
        // 1
        //2
        //3
        //4
        i++;
        if(i < 5){
            continue;
        }
        else{ 
            b= False;
        }
    }while(b);
    return 0;  

}