#include<iostream>
using namespace std;


int main()
{
int add, sub, mul, div,mod,btw;
bool lt,gt,lte,gte,an,oorr;
add=2+1;
sub=2-1;
mul=2*1;
div=2/1;
mod=2%1;
lt=2<1;
gt=2>1;
lte=2<=1;
gte=2>=1;
btw=4<<4;
an=3<0 && 4>1;
oorr=3<0 || 4>1;
cout<<endl<<add<<endl<<sub<<endl<<mul<<endl<<div<<endl<<mod<<endl<<lt<<endl<<gt<<endl<<lte<<endl<<gte<<endl<<btw<<endl<<an<<endl<<oorr;
}