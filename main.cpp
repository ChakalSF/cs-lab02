#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n' ;   // Добавлена печать прооизведения
     int max;
     max=a;
     if (a<b)
     {
         max=b;
         cout<<max;
     }
     else
     {
     if (a==b)
        cout<<" chisla ravnie";
        else
            cout<<max;
     }
    return 0;
}
