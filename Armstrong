#include<stdio.h>
#include<math.h>
void armstrong(int n,int size){
    int temp=n,ans=0;
      while(n>0){
        int rem=n%10;
        ans=ans+pow(rem,size);
        n=n/10;
    }
    if(temp==ans)
        printf("armstrong");
    else
        printf("not armstrong");
}
int main(){
    int n,size,count;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        count=n%10;
        n=n/10;
        size++;
    }
   armstrong(temp,size);
    return 0;
}
}