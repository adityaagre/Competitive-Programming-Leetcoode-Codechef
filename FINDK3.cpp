// https://www.codechef.com/START98D/problems/FINDK3?tab=submissions
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        int x,y,z,a,b;
        
        cin>>x>>y>>z;
        int l,m;
        l=x;
        m=y*z;
        
        bool k = false;
        
        if(m%l == 0)
        {
            cout<<m<<" "<<l<<endl;
            k = true;
        }
        
        if(k == false)
        {
            l = y;
            m = x*z;
            
            if(m%l == 0)
            {
                cout<<m<<" "<<l<<endl;
                  k = true;
                
            }
        }
        
         if(k == false)
         {
            l = z;
            m = x*y;
            
            if(m%l == 0)
            {
                cout<<m<<" "<<l<<endl;
                  k = true;
                
            }
            
        if(k == false)
        {
            cout<<-1<<endl;
        }
            
            
             
         }
        
        
        
        
       
        
        
    }
}

