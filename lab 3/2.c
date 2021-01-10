/* using stack*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(char seq[]);
void main(){
    char seq[100];
    int n;
    printf("enter no. of sequences: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter expression: ");
        scanf("%s",seq);
        check(seq);
    }
}
void check(char seq[]){
    
    int top,l,i;
    char stack[100];
    l= strlen(seq);
    char temp;
    top=-1;
    for(i=0;i<l;i++){
        // e.g :   ]]})
        if((seq[i]==')' || seq[i]=='}' || seq[i]==']')&& top == -1){
            break;
        }
        else if(seq[i]=='(' || seq[i]=='{' || seq[i]=='['){
            top++;
            stack[top]= seq[i];
            continue;
        }
        else{
            temp = stack[top];
            top--;
            if((temp=='(' && seq[i]==')') || (temp=='{' && seq[i]=='}') || (temp=='[' && seq[i]==']')){
                continue;
            }
            else{
                break;
            }
        }
    }
    if(i==l && top == -1){
        printf("%s yes\n",seq);
    }
    else{
        printf("%s no\n",seq);
    }
}