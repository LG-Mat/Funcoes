#include<stdio.h>

int maior(int n){
    int i, m, x[5];

    for(i=0; i<5; i++){
        scanf("%d", &x[i]);
    }

    m = x[0];

    for(i=0; i<5; i++){
       if(x[i]>m){
           m = x[i];
       } 
    }
    return m;
}

int main(int argc, char const *argv[])
{
    int x, y;

    y = maior(x);
    printf("Maior: %d", y);

    return 0;
}
