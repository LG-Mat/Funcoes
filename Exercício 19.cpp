#include<stdio.h>

int perfeito (int n){
    int i, size = 0, divisores[size], x=n-1, soma=0;

    for(i=1; i<n; i++){
        if(n%i == 0){
            divisores[size] = i;
            size++;
        }
    }
    for(i=0; i<size; i++){
        printf("%d ", divisores[i]);
        soma = soma + divisores[i];
    }
    
    if(soma == n)
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int valor;

    scanf("%d", &valor);
    printf("%d", perfeito(valor));

    return 0;
}
