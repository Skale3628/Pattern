#include<stdio.h>
void main(){
    // int x=1;
     //char ch='A';
    for(int i=1;i<=4;i++){
       int x=1;
     char ch='A';
        for(int j=4;j>=i;j--){
            if(j%2==0){
                printf("%d ",x);
                x++;
            }
            else{
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
}