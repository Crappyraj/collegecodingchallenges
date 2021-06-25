#include<stdio.h>
int main()
{
int n,sum=0,m,k,j,l;

scanf("%d",&n);

scanf("%d",&m);
while(n>0)
{
k=n%10;
sum=sum+k;
n=n/10;
}
j=sum%2;
l=m%2;
if(n>99 || m>31)
{
    printf("INVALID INPUT\n");
}
else if(n<0 || m<0)
{
    printf("INVALID INPUT\n");
}
else if(j==0 && l==0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
return 0;

}