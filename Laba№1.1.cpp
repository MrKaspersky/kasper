#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int y, x, z;

    
    cout << "Enter y = ";
    cin >> y;
    cout << "Enter x = ";
    cin >> x;
    cout << "Enter z = ";
    cin >> z;

    double a, b;
    const double PI = 3.141;

    a = 2*sin(y+PI/3)/(1/2+pow(sin(fabs(y+2)),3))+asin(x+PI/2);
    b = 1+(pow(z,2)/5)/(3-pow(pow(z,2),1/3));

    cout << "a = " << a << endl;
    cout << "b = " << b;
    return 0;
}



