#include<iostream>
#include<cmath>

using namespace std;
main()
{
float a,b,c,square,ac,denominator,underroot,squareroot,nominator,nomi,result,resultt;
cout<<"enter a:";
cin>>a;

cout<<"enter b:";
cin>>b;
cout<<"enter c:";
cin>>c;

square=pow(b,2);

ac=4*a*c;

denominator=2*a;

underroot=square-ac;

squareroot=sqrt(underroot);

nominator=-b-squareroot;

result=nominator/denominator;

cout<<"result:"<<result<<endl;

nomi=-b+squareroot;

resultt=nomi/denominator;

cout<<"result:"<<resultt;

}