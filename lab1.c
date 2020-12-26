/*      Name : Payal Soni
        Roll NO. : 205120070
*/
    
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void sum(int);
void print_digit(int);
void math_func(int);
void main(){
    char name[20];
    int n;
    printf("please enter your name without surname. \n");
    scanf("%s",&name);
    printf("Hello! %s, wishing you a very good morning. Have a nice day! \n",name);
    n=strlen(name);
    printf("There are %d alphabets in your name. \n",n);
    sum(n);
    print_digit(n);
    math_func(n);
}
void sum(int a){
    int sum;
    sum = (a*(a+1))/2;
    printf("sum of %d natural numbers is %d \n",a,sum);
}
void print_digit(int a){
    /* this function is for print numbers from 1 to N where odd numbers printed twice and even numbers thrice. */
    for(int i=1;i<=a;i++){
        if(i%2==0){
            printf("%d %d %d\n",i,i,i);
        }
        else{
            printf("%d %d\n",i,i);
        }
    }
}
void math_func(int b){
    /* this function is for perform mathematical functions.*/
    printf("-------------some mathematical operations-------------\n\n");
    printf("square root of %d is %f\n",b,sqrt(b));
    printf("the exponential value of %d is %f\n",b,exp(b));   
    printf("the logarithmic value of %d is %f\n",b,log(b));
    printf("the base 10 logarithmic value of %d is %f\n",b,log10(b));
    printf("the sine value of %d is %f\n",b,sin(b));
    printf("the cosine value of %d is %f\n",b,cos(b));
}