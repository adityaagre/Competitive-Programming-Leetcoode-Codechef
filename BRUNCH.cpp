//https://www.codechef.com/START103D/problems/BRUNCH

#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test<tests; test++)
    {
        int x,y;
        cin>>x>>y;
        
        if(20 > (x/y))
        {
            cout<< (x/y) <<endl;
        }
        
        else
        {
            cout<<20<<endl;
        }
    }
}