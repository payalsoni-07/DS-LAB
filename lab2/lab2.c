/*
    NAME : PAYAL SONI
    ROLL NO.: 205120070
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void prob1();
void prob2();
void prob3();
void printarr(int arr[]);
void count_char(char word[]);
void permute(char* a, int l, int r) ;
void printp(int* arr, int l, int r);
void swapn(int *x, int *y);
void odd_even(int *arr, int l, int r);
void check(int arr[]);

long int sort[120];
void main(){
    int i,j, temp;
    printf("----------------------PROBLEM 1----------------------\n");
    prob1();
    printf("\n\n----------------------PROBLEM 2----------------------\n");
    prob2();
    printf("\n\n----------------------PROBLEM 3----------------------\n");
    prob3();
    printf("\n------------sorted permutations in descending order--------------\n");
    for(int i=0;i<120;i++){
        for(j=i+1;j<120;j++){
            if(sort[j]>sort[i]){
                temp=sort[i];
                sort[i]=sort[j];
                sort[j]=temp;
            }
        }
    }
    for(i=0;i<120;i++){
        printf("%d\t",sort[i]);
    }
}
void prob1(){
    int age,year=2001;
    printf("P\nA\nY\nA\nL\nS\nO\nN\nI\n");
    printf("2*0*5*1*2*0*0*7*0");
    printf("\nDate Of Birth : 07\\08\\2001");
    printf("\nenter your current age in years: ");
    scanf("%d",&age);
    printf("my 50th birth year is %d\n",2070-age);
    printf("My 50,100,150,200 birthyear is %d,%d,%d,%d",year+50,year+100,year+150,year+200);
    fflush(stdin);
}
void prob2(){
    char name[20],set[20];
    int l;
    l= sizeof(name)/sizeof(name[0]);
    printf("\nenter your full name: ");
    gets(name);
    for(int i=0;i<l;i++){
        if(name[i]==' '){
            for(int j=i;j<l;j++){
                name[j]=name[j+1];
            }
            l--;
        }
    }
    strcpy(set,name);
    count_char(set);
}
void count_char(char word[]){
    int len;
    len= strlen(word);
    printf("There are %d characters in the set",len);
    printf("\nPrinting the others 5 set of word:");
    permute(word,0,len-1);
}
int swap(char* x, char* y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char* a, int l, int r)
{
    static int count;
    int i;
    FILE *fp;
    if (l == r && count<5) {
        count++;
        fp= fopen("file##.csv","a");
        printf("\n%s",a);
        fprintf(fp,"\n%s",a);
        fclose(fp);
    }
    else {
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i));
        }
    }
}
void prob3(){
    int a[5],temp;
    printf("\nenter 5 distinct digits:");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\nall permutations: \n");
    printp(a, 0, 4);
    printf("\n");
    odd_even(a,0,4);
}
void swapn(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void printp(int* arr, int l, int r)
{
    int i;
    if (l == r) {
        printarr(arr);
    }
        for (i = l; i <= r; i++){
            swapn((arr + i), (arr + l));
            printp(arr, l + 1, r);
            swapn((arr + i), (arr + l));
        }
}
void printarr(int arr[]){
    int i;
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\t");
}
void odd_even(int *arr,int l,int r){
    int i;
    if (l == r) {
        check(arr);
    }
    else{
        for (i = l; i <= r; i++){
        swapn((arr + i), (arr + l));
        odd_even(arr, l + 1, r);
        swapn((arr + i), (arr + l));
        }
    }
}
void check(int arr[]){
    int i,n=0,a=1;
    int static k;
    for(i=4;i>=0;i--){
        n=n+arr[i]*a;
        a*=10;
    }
    sort[k]=n;
    k++;
    if(n%2==0){
        printf("%d is even\t",n);
    }
    else{
        printf("%d is odd\t",n);
    }
}
