#include <iostream>
using namespace std;
int main()
{
int a, b;
double c, res;
cin>>a>>b>>c;
res = b * c;
cin>>a>>b>>c;
res += b * c;
cout<<"VALOR A PAGAR: R$ "<<res;
return 0;
}