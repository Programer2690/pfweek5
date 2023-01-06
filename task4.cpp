#include<iostream>
using namespace std;
int function(int);
main()
{
    int num;
cout<<"enter a five digit number:";
cin>>num;
function(num);



}
int function(int num)
{ 
    int total;
  total=(num%10)+(num/10)%10+(num/100)%10+(num/1000)%10+(num/10000)%10;
  if(total%2==0)
  {cout<<"it is evenish";}
   
    if(total%2!=0)
    {cout<<"it is oddish";}
  

}