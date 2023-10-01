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
        printf("%d\t",ans);
   
}
int main(){
    int num,count;
    for(num=1;num<100;num++){
    int temp=num,size=0;
    while(temp>0){
        count=temp%10;
        temp=temp/10;
        size++;
    } 
    armstrong(num,size);
}    return 0;
}