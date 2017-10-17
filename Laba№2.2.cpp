#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
int mas;
cout << "mas = ";
cin >> mas;
float *a = new float[mas];
int i = 0;
for (i = 0; i < mas; i++)
{
cin >> a[i];
}
int y = 0, l = 0;
for (i = 0; i < mas; i++)
{
if (a[i] == a[i + 1]) y++;
}
for (i = 0; i < mas; i++)
{
for (i = 0; i < mas-1; i++)
{
if (a[i] == a[i + 1]) y++;
}
if (y > l)
l = y;
}
cout << l;
system("pause");
return 0;
}



