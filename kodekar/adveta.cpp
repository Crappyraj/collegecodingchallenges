#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,A=100,R=120,J=80;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        A=A+(100+i*10);
        R=R+(120+i*5);
        J=J+(80+i*20);
    }
    
    cout<<A<<endl;
    cout<<R<<endl;
    cout<<J<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
