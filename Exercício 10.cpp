#include<stdio.h>

int conta (int array[5], int x){
    int i, count=0;

    for(i=0; i<5; i++){
        if(array[i]==x)
            count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int ar[5], n, i;

    for(i=0; i<5; i++){
        scanf("%d", &ar[i]);
    }
    printf("===\n");
    scanf("%d", &n);

    printf("%d", conta(ar, n));

    return 0;
}


