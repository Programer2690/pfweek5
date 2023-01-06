#include<iostream>
using namespace std;
int sym(int num);
main()
{
    
int num;
 cout<<"enter a three digit number:";
 cin>>num;
sym(num);

    
    
}
int sym(int num)
{
if(num%10==num/100)
{
cout<<"it is symmetrical"<<endl;
}


if(num%10!=num/100)
{ 
cout<<"it is not symmetrical"<<endl;
}
}