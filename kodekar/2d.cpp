
#include <iostream>
using namespace std;

int main()
 {
	int arr[10][10];
	int n,m,i,j,ans=0;
	
	cout<<"enter the rows:"<<endl;
	cin>>n;
	cout<<"enter the columns:"<<endl;
	cin>>m;
	cout<<"enter the  array:"<<endl;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(arr[i][j]==1)
            {
               
                 ans = ans + arr[i]*arr[i+1];
                
            }
           
	    }
	}

cout<<ans;

	return 0;
}
