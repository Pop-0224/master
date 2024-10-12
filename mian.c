#include <stdio.h>


int sub (int a ,int b);
int main() {
    int sum = sub(23,21);
    printf("%d\n",sum);
    return 0;
}
int sub (int a ,int b){
     return a+b;
}