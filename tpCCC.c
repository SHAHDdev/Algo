#include<stdio.h>
int main(void) {
    int i, j;
    char mat[5][5] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'c', '9', '4', 'z', '8'},
        {'5', '6', 'p', 'n', '3'},
        {'2', '9', 't', 'm', 'k'}
    };
// print full matrice
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%c\t",mat[i][j]);}
    printf("\n");
   }
   printf("\n\n");
   //print odd ligne
   for(i=0;i<5;i=+2){
    for(j=0;j<5;j++){
        printf("%c\t",mat[i][j]);}
          printf("\n");}
   
//    print even ligne
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(i%2==1){
        printf("%c\t",mat[i][j]);}
}
    printf("\n");}
    //print the 1st diagonal
for(i=0;i<5;i++){
 printf("%c\t",mat[i][i]);}
    printf("\n");
   
   for(i=0;i<=4;i++){
 printf("%c",mat[i][4-i]);}
       
       
    }
   
