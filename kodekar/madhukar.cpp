#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,bal=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        bal=37000-(i*20);
        cout<<bal<<' ';
    }
    cout<<'\n'<<bal<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
