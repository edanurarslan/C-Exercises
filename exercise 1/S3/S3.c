#include <stdio.h>

int main(){

    int gun, bas, i, j;

    scanf("%d\n%d", &gun, &bas);    
    printf("Aydaki gün sayısını yazınız: %d\n",gun);        
    printf("Ayın başlangıç gününü yazınız (1= Mon, 7=Sun): %d\n",bas);

    for(i=1;i<bas;++i){
        printf(" \t");
    }
    for(j=1;j<=gun;++j){
        if (j==gun){
            printf("%d",j);
        }
        else{
          printf("%d\t",j);
          if(((j+bas-1)%7)==0){
            printf("\n");
          }
        }
    }

    return 0;
}
