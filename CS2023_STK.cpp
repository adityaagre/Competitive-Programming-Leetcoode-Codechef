https://www.codechef.com/START94D/problems/CS2023_STK

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int test =0; test<t; test++)
    {
        int N;
        
        cin>>N;
        
        int A[N];
        int B[N];
        
        for(int i =0; i<N; i++)
        {
            cin>>A[i];
        }
        
        for(int i =0; i<N; i++)
        {
            cin>>B[i];
        }
        
        int addy;
        int om;
        
        
        int ptr;
        int strk;
        int max;
        
        ptr =0;
        strk =0;
        max =0;
        
        for(ptr =0; ptr<N; ptr++)
        {
            if (A[ptr]>0)
            {
                strk++;
                
                if (strk>max)
                {
                    max = strk;
                    
                }
            }
            
            else
            {
                strk =0;
            }
        }
        
        om = max;
        
        
        ptr =0;
        strk =0;
        max =0;
        
        for(ptr =0; ptr<N; ptr++)
        {
            if (B[ptr]>0)
            {
                strk++;
                
                if (strk>max)
                {
                    max = strk;
                    
                }
            }
            
            else
            {
                strk =0;
            }
        }
        
        addy = max;
        
        
        if(addy>om)
        cout<<"Addy"<<endl;
        else if(addy<om)
        cout<<"Om"<<endl;
        else
        cout<<"Draw"<<endl;
        
        
        
        
        
    }
}