#include<stdio.h>
void main(){
    int x=1;
    for(int i=1;i<=3;i++){
        for(int j=3;j<=i;j--){               //if write 'j>=i' it will go in an infinite loop (never ending process)
            printf("%d ",x);
            x++;
        }
        printf("\n");
        
        
    }
     
}