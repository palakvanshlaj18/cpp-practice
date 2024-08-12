#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5-row;col++)
        {
            cout<<" ";
        }
        for(int temp=1;temp<=row;temp++)
        {
        cout<<"* ";    
        }
        cout<<endl; 
         }
         
    

    
    


    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<" ";
        }
        for(int temp=1;temp<=5-row;temp++)
        {
        cout<<"* ";    
        }
        cout<<endl; 
         }
         

    }
