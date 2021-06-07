#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n' ;   // Добавлена печать прооизведения

     int max;
     max=a;
          int min;
     min =a;
     if (a<b)
     {
         max=b;
         cout<<max<<endl;
     }
     else
     {
     if (a==b)
        cout<<" chisla ravnie"<<endl;
        else
            cout<<max<<endl;
     }

     if (b<a)
     {
       min=b;
       cout<<min<<endl;
     }
       else
       {


        if (a==b)
        cout<<"chisla ravnie"<<endl;
        else
            cout<<min;
       }





    return 0;
}
