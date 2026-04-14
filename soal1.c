#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int N;
    int mod2;
    int mod3;
    int count;
    int i;
    scanf("%d", &N);
    mod2 = N%2;
    mod3 = N%3;

    while (i<1)
    {
        if (mod2==0 && mod3==0){
            printf("BIRU\n");
        }
        else if (mod3==0){
            printf("MERAH\n");
        }
        else if (mod2==0){
            printf("KUNING\n");
        }
        else{
            printf("%d", N);
        }
        i++;
    }
    return 0;
}
