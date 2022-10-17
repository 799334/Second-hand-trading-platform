#include<stdio.h>
int main(){
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int high,low,mid,n;
 scanf("%d",&n);
 low=0;high=10;
 while(low<=high)
 {mid=(low+high)/2;
  if(n==a[mid]) break;
  else if(n>a[mid]) low=mid+1;
  else high=mid-1;
 }
 if(low<=high) printf("%d",mid);
 else printf("-1");
 return 0;
}
