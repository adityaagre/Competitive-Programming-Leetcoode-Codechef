//https://www.codechef.com/START105D/problems/CHEAT
#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test < tests; test++)
    {
        int n;
        cin>>n;
        n = n-2;
        if(n>=0)
        {
            cout<<((n/7) + 1)<<endl;
            
        }
        
        else
        {
            cout<<0<<endl;
        }
        
    }
}