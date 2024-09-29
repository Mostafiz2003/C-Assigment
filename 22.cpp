#include <iostream>
using namespace std;
int main()
{
double a,b;
char word[256];
cin>>word;
cin>>a>>b;
cout<<"TOTAL = R$ "<<a +((b/100)*15);
return 0;
}