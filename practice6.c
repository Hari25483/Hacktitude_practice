#include <stdio.h>

int min(int x, int y){
    return (x > y) ? y : x;
}

int main() {
   int a=10,b=20;
   printf("%d",min(a,b));
   return 0;

}