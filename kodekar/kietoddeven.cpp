#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
     for(int i=0;i<n;i++)
    {
    if(a[i]<100&&a[i]%2==1&&b[i]<100&&b[i]%2==0)
    {
        cout<<a[i]+b[i]<<'\n';
    }
    else if(a[i]<100&&a[i]%2==0&&b[i]<100&&b[i]%2==1)
    {
       cout<<a[i]-b[i]<<'\n';  
    }
    else if(a[i]%2==0&&b[i]%2==0)
    {
      cout<<a[i]*b[i]<<'\n';    
    }
     else if(a[i]%2==1&&b[i]%2==1)
    {
      cout<<a[i]*b[i]<<'\n';    
    }
    else
    {
        cout<<0<<'\n';
    }
     }
    
    
    return 0;
}
