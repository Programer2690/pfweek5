#include<iostream>
#include<cmath>

using namespace std;
float height(float base,float angle);
main()
{
   cout<<"find height:";
   height(base,angle);

   
}
float height(float base,float angle)
{
   float height,angle,base;
   
   base=43;
   
   angle=tan(30/57.2958);

   height=base*angle;

   cout<<"height:"<<height;
   cout<<"feets";


}