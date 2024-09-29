#include <iostream>
#include<math.h>
using namespace std;
int main()
{
double a, b, c;
cin>>a>>b>>c;
cout<<"TRIANGULO: "<<(a * c) / 2;
cout<<"CIRCULO: "<<c * c * 3.14159;
cout<<"TRAPEZIO: "<<((a + b) / 2) * c;
cout<<"QUADRADO: "<<b * b;
cout<<"RETANGULO: "<<a * b;
return 0;
}