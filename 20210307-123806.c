#include<stdio.h>
#include<ctype.h>
int main()
{
   
   int a=0;
   printf("Input any integer:");
   scanf("%d",&a);
   switch(a<0)
{
    case 1:
        printf("The integer is a negative number",a);
        break;
    case 0:
        switch(a==0)
{
       
    case 1:
     printf("inputted data is invalid",a);
        break;
     
    case 0:
     printf("The integer is positive");
      break;  
}
      break;
}
    return 0;
}