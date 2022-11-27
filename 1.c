#include <stdio.h>
#include <conio.h>


void show();
void sum();
void sub();
void avg();
void fac();
void sub();
void prime();
void leap();
void multi();
void divs();

int main()
{
    int n;
    printf("Welcome to c program to solve basic life problem related to maths(like add,sub,leap year etc.\n");
     show();
    printf("\nPlease Select the problem number you want to solve\n");
    scanf("%d",&n);
    if(n==1){
         sum();
    }
    else if(n==2)
    {
         sub();
    }
    else if(n==3){
         avg();
        
    }
    else if(n==4){
         fac();
        
    }
    else if(n==5){
         prime();
    }
    else if(n==6){
         leap();
    }
    else if(n==7){
         multi();
    }
    else if(n==8){
        divs();
    }
    else{
        printf("Invalid number/NUMBER not founded");
    }
    return 0;
    
}

void show()
{
    printf("1.summation\n");
    printf("2.substraction\n");
    printf("3.Average\n");
    printf("4.factorial\n");
    printf("5.Prime number check\n");
    printf("6.Leap year check\n");
    printf("7.multiply\n");
    printf("8.division\n");
    
}

void sum()
{
    int i, n, num, sum=0;
    printf("Enter how many numbers to add: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum = sum+num;
    }
    printf("\nSum of all %d numbers = %d", n, sum);
    
    
}

void sub()
{
    int x,y,z;
    printf("Enter the two values to substract:\n");
    scanf("%d\n%d",&x,&y);
    z=x-y;
    printf("%d",z);
}

void avg( )   
{   
  int n, count = 1;   
  float x, average, sum = 0;   
  printf("Enter the value of n?\n");  
  scanf ("%d",&n);   
  while (count <= n)   
     {   
      printf ("Enter the %d number?\n",count);   
      scanf("%f", &x);   
      sum += x;   
      ++count;   
     }   
      average = sum/n;   
      printf("\nThe Average is %f\n", average);   
}  
  
void fac()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    

} 

void prime()
{    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
 
 }
 
 void leap() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
  
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
  
   else {
      printf("%d is not a leap year.", year);
   }
}

void multi()
{
    int i, n, num, mul=1;
    printf("Enter how many numbers to multiply: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        mul = mul*num;
    }
    printf("\nmultiply of all %d numbers = %d", n, mul);
   
}
void divs()
{
    
  float a, b;  
  
    printf("Enter value for a and b, for division (a/b)\n");  
    scanf("%f\n%f", &a, &b);  
  
    if( b != 0 )  
       printf("Division of %f and %f is %f\n", a, b, a/b);  
  
    if( b == 0 )  
       printf("You can't divide a number by 0\n");  
  
  
}