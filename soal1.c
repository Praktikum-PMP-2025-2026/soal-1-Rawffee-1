#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int N;
    int mod2;
    int mod3;
    int i;
    int tingkat;
    scanf("%d", &N);
    tingkat = 1;

    for (i=0; i<N; i++){
        mod2 = tingkat%2;
        mod3 = tingkat%3;
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
            printf("%d\n", tingkat);
        }
        tingkat++;
    }
    return 0;
}
