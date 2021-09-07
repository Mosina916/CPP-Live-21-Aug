
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int x=0;
    int y=0;
    char ch;
    ch=cin.get();
    while(ch!='\n')
    {
        if(ch=='E')
        {
            x++;
        }
        else if(ch=='W')
        {
            x--;
        }
        else if(ch=='N')
        {
            y++;
        }
        else if(ch=='S')
        {
            y--;
        }
        ch=cin.get();
    }

    if(x>=0 && y>=0)
    {
        for(int i=1;i<=x;i++)
        {
            cout<<"E";
        }
        for(int i=1;i<=y;i++)
        {
            cout<<"N";
        }
    }
    else if(x<=0 && y>=0)
    {
        for(int i=1;i<=y;i++)
        {
            cout<<"N";
        }
        for(int i=1;i<=abs(x);i++)
        {
            cout<<"W";
        }
    }
    else if(x<=0 && y<=0)
    {
        for(int i=1;i<=abs(y);i++)
        {
            cout<<"S";
        }
        for(int i=1;i<=abs(x);i++)
        {
            cout<<"W";
        }
    }
    else
    {
        for(int i=1;i<=x;i++)
        {
            cout<<"E";
        }
        for(int i=1;i<=abs(y);i++)
        {
            cout<<"S";
        }
    }
    cout<<endl;


    return 0;
}
















