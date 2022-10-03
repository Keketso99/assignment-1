#include <stdio.h>
#include <math.h>

bool check_Prime(int num)   
{  
    bool isprime=true;
    if(num==0||num==1){
          isprime=false;
    }
    for(int i=2; i<=num/2; i++)    
    {     
        if(num % i == 0)    
        {  
            isprime=false;
            break;
        }    
    }   
    return isprime;   
}
int findReverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}

int main()
{
  int lm = 0;
  int st=10;
  while(lm<10)
    {
     if(check_Prime(st)==true)
    {
      if(st*st!=findReverse(st*st)){
         if(check_Prime(sqrt(findReverse(st*st)))==true){ 
             printf(st*st\n);
             lm++;
            }
      }
    }
     st++;
    }
  return 0;
}
  
