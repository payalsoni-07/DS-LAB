/* use queue */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int n,A,B;
    printf("enter size of list.");
    scanf("%d",&n);
    int q[n];
    for(int x=0;x<n;x++){
        scanf("%d",&q[x]);
    }
    int i=0,j;
    j=n-1;
    while(i<n && j>=0){
        A = q[i];
        B = q[j];
        if(A>B){
            printf("1 ");
            j--;
        }
        else if(A<B){
            printf("2 ");
            i++;
        }
        else{
            printf("0 ");
            i++;
            j--;
        }
    }
    
}