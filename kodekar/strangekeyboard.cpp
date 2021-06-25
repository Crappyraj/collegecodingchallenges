#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    string start="",end="",initial="",v="";
    int flag=2;
    for(int i=0;i<l;i++)
    {
        char c=s.at(i);
        if(c=='<')
        {
            flag=0;
            v=v+initial;
            v=start+v;
            v=v+end;
            initial="";
            start="";
            end="";
        }
        else if(c=='>')
        {
            flag=1;
            v=v+initial;
            v=start+v;
            v=v+end;
            initial="";
            start="";
            end="";
        }
        else
        {
            if(flag==0)
            {
                start=start+c;
            }
            if(flag==1)
            {
                end=end+c;
            }
            if(flag==2)
            {
                initial=initial+c;
            }
            
        }
    }
    v=start+v+end;
    int m=v.length();
    for(int i=0;i<m-1;i++)
    {
        if(v[i]!='*' && v[i+1]!='*')
        {
            cout<<v[i];
        }
    }
    if(v[m-1]!='*')
    {
        cout<<v[m-1];
    }
    return 0;
}

    