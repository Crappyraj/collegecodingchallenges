#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    char s[n];
    int c[n]={0};
    int ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
     for(int i=0;i<n;i++)
    {
         for(int j=0;i<m;i++)
        {
            char ch=s[i].at(j);
            if(ch=='1')
            {
                c[i]++;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
    ans=ans+c[i]*c[i+1];
    }
    printf("%d",ans);
    return 0;
}




