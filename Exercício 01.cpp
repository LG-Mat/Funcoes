#include<stdio.h>

int fun (int a){
    return printf("%d", a);
}

int main(int argc, char const *argv[])
{
    int x = 12;
    fun(x);
    return 0;
}
