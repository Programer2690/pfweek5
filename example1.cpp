#include<iostream>
using namespace std;
int integer(int number1,int number2);
main()
{
   int number1,number2,result;
   cout<<"enter first number:";
   cin>>number1;
   cout<<"enter second number:";
   cin>>number2;

    result=integer(number1,number2);
    cout<<"greater is:"<<result;
}


  int integer(int number1,int number2)
  {
  if(number1>=number2)
   {
   return number1;
   }

   if(number1<=number2)
    {
     return number2;
    }
    return 0;
   }
      