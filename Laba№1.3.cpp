#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int a1,a2,a3,a4;
    cout<<"n=";
    cin>>n;
    while (n<1000 || n>=10000)
    {
        cout<<"\n n=";
        cin>>n;
    }
    a1=int(n/1000);
    a2=int(n/100)-a1*10;
    a3=int(n/10)-a1*100-a2*10;
    a4=n-a1*1000-a2*100-a3*10;
    if((a1==a2&& a2==a3&& a4!=a3) || (a1==a2 && a2==a4&& a3!=a2) || (a2==a3 && a3==a4&& a1!=a3) || (a1==a3 && a3==a4&& a2!=a3))
    {
        cout<<"verno\n";
    }
    else
        cout<<"ne verno\n";
    system ( " pause " );
    return 0;
}


