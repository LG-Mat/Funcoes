#include<stdio.h>

float soma (float m, float n){
    float soma=0;
    soma = m + n;
    return soma;
}

float subtracao (float m, float n){
    float sub=0;
    sub = m - n;
    return sub;
}

float multiplicacao (float m, float n){
    float mult=0;
    mult = m*n;
    return mult;
}

float divisao (float m, float n){
    float div=0;
    div = m/n;
    return div;
}

int main(int argc, char const *argv[])
{
    float m, n;
    int cod;

    printf("Digite os valores da operacao: ");
    scanf("%f %f", &m, &n);
    printf("Qual a operacao desejada?\n(1) Soma\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n");
    scanf("%d", &cod);

    if(cod == 1)
        printf("Soma: %f", soma(m, n));
    if(cod == 2)
        printf("Subtracao: %f", subtracao(m, n));
    if(cod == 3)
        printf("Multiplicacao: %f", multiplicacao(m, n));
    if(cod == 4)
        printf("Divisao: %f", divisao(m, n));
    if(cod < 1 or cod >4)
        printf("Codigo de opecacao invalido.");
    

    return 0;
}
