#include<stdio.h>

void ord (int a, int b, int c){
    int array[3]={a, b, c};
    int i, h, count, temp;

    for(i=0; i<3; i++){
        for(h=0; h<3-i; h++){
            if(array[h]>array[h+1]){
                temp = array[h];
                array[h] = array[h+1];
                array[h+1] = temp;
            }
        }
    }
    for(i=0; i<3; i++){
        printf("%d ", array[i]);
    }
}

int main(int argc, char const *argv[])
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z );

    ord(x, y, z);

    return 0;
}

