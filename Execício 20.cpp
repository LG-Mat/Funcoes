#include<stdio.h>

int func (int x){
    int soma=0, i;

    for(i=1; i<=x; i++){
        soma = soma + i;
    }

    return soma;
}

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);
    printf("%d", func(n));

    return 0;
}
