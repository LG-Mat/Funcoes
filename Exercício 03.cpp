#include<stdio.h>

int valor (int n, int m){

    scanf("%d %d", &n, &m);

    if (n == m)
        return printf("1");
    else
        return printf("0");
}

int main(int argc, char const *argv[])
{
    int x, y;

    valor(x,y);
    
    return 0;
}
