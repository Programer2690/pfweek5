#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float num1;
  float num2;
  float result;
  cout<<"enter number:";
  cin>>num1;
  cout<<"enter number:";
  cin>>num2;

  result=max(num1,num2);
  cout<<"MAXIMUM is:"<<result<<endl;
  
  result=min(num1,num2);
  cout<<"MINIMUM is:"<<result<<endl;
}