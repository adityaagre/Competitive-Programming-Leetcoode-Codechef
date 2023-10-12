// https://www.codechef.com/START103D/problems/OCTATHON

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    
    if(x>=6)
    {
        cout<<"Bronze"<<endl;
    }
    
    else if(x >= 3)
    {
        cout<<"Silver"<<endl;
    }
    else
    {
        cout<<"Gold"<<endl;
    }
}