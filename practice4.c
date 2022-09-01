#include <stdio.h>

void func(char *str){
    if (!*str){
        // printf("sdd\n");
        return;
    }
    func(str+1);
    putchar(*str);
}

int main() {
    func("CO222-CP");
    putchar('\n');
    return 0;

}