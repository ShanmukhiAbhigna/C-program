#include<iostream>
using namespace std;
int main()
{
int a,b,input;
float div;
cout<<"CALCULATOR\n\n1-add\n2-substract\n3-multiplication\n4-division\n5-modulas\n";
cout<<"ENTER THE OPERATION => ";
cin>>input;
cout<<"\nNUMBER 1 : ";
cin>>a;
cout<<"\nNUMBER 2 : ";
cin>>b;
switch(input)
{
case 1:
cout<<a<<" + "<<b<<" = "<<(a+b);
break;
case 2:
cout<<a<<" - "<<b<<" = "<<(a-b);
break;
case 3:
cout<<a<<" x "<<b<<" = "<<(a*b);
break;
case 4:
div=(float)a/(float)b;
cout<<a<<" / "<<b<<" = "<<div;
break;
case 5:
cout<<a<<" % "<<b<<" = "<<(a%b);
break;
default:
cout<<"ENTERED OPERATION IS INVALID ...!!";
}
}

