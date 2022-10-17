#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
 int a,c;
 c=1;
 scanf("%d",&a);
 if(a==0) printf("0");
 while(a>0){printf("%d",a%10);
  a=a/10;
 }
 if(a<0){
  while(a){a=abs(a);printf("%d",a%10);
 a=a/10,c=0;
 }}
 if(c==0) printf("-");
  
 return 0;
 
}
