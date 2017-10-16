#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	int n;
cout << "array size ="; 
cin >> n; 
float *a = new float[n]; 
for (int i = 0; i < n; i++) 
{ 
cout << "[" << i + 1 << "]:"; 
cin >> a[i]; 
} 
float min = a[0]; 
float sum = 0; 
for (int i = 0; i < n; i++) 
{ 
sum = sum + a[i]; 
if (a[i] < min) 
{ 
min = a[i]; 
} 
} 
int avg = sum / n; 
for (int i = 0; i < n; i++) 
{ 
if (a[i] == min) 
{ 
a[i] = avg; 
break; 
} 
} 

for (int i = n-1; i >= 0; i--) 
{ 
if (a[i] == min) 
{ 
a[i] = avg; 
break; 
} 
} 
cout << "new array:" << endl; 
for (int i = 0; i < n; i++) 
{ 
cout << "[" << i + 1 << "]:" << a[i] << endl; 
} 
delete[] a; 
system("pause"); 
return 0; 
}
