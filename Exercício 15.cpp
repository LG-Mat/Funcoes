#include<stdio.h>
#include<string.h>

int soma (int n){
    int i, soma=0, resto;

    while(n>10){
        resto = (n%10);
        soma = soma + resto;
        n = n/10;
    }
    soma = soma + n;

    return soma;
}

int main(int argc, char const *argv[])
{
    int x;

    printf("Digite um valor: ");
    scanf("%d", &x);

    printf("%d ", soma(x));

    return 0;
}
