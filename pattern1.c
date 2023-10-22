#include<stdio.h>
void main(){
    //char ch='A';
    for(int i=1;i<=3;i++){
       char ch='A'; //for keeping the first value same 
        for(int j=1;j<=3;j++){
           //printf("%c ",ch++);//for having a gap of 1
           printf("%c ",ch); //for no gap all in a perfect order
           //ch=ch+2; //for having a gap of 2 
           ch++;
        }
        printf("\n");
        
    }
     
}