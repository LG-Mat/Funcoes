#include<stdio.h>

int scn (int n){
    scanf("%d", &n);
    return printf("Lido: %d", n);
}

int main(int argc, char const *argv[])
{
    int x;
    scn(x);
    return 0;
}
