#include<stdio.h>

float media (float n1, float n2){
    float nota;
    nota = (n1+n2)/2;

    return nota;
}

int main(int argc, char const *argv[])
{
    float p1, p2;

    scanf("%f %f", &p1, &p2);
    printf("Nota final: %0.2f", media(p1, p2));
    
    return 0;
}
