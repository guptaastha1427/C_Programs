#include <stdio.h>

int main()
{
   int n=1234,ans=0,digit;
   while(n>0){
       digit=n%10;
       ans=ans*10+digit;
       n=n/10;
   }
  
   printf("%d",ans);
    return 0;
}