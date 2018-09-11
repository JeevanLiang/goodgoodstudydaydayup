#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
    int n=2;
    if (a%n==0||a==2)
    {
        cout<<"NO";
        return 0;
    }   
    else 
    {
        for (n=3;n<=sqrt(a);n+=2)
        {
            if (a%n==0)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}