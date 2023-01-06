#include<iostream>
using namespace std;
float pool(float,float,float,float);
float pipe1(float,float);
float pipe2(float,float);
float over(float,float,float,float);
main(){
    float litre,p1,p2;
    float hour;
    int overflow;
    float absent;
    cout<<"the volume of the pool in liters [1 ... 10000]:";
    cin>>litre;
    cout<<"the flow rate of the first pipe per hour [1 ... 5000]:";
    cin>>p1;
    cout<<"the flow rate of the second pipe per hour [1 ... 5000]:";
    cin>>p2;
    cout<<"the hours that the worker is absent [1.0 ...24.00]:";
    cin>>hour;
   
    cout<<"contribution of pipe 1:"<<pipe1(p1,p2)<<endl;
    cout<<"contribution of pipe 2:"<<pipe2(p1,p2)<<endl;
    cout<<"level of pool % :"<<pool(p1,p2,hour,litre)<<endl;

   
    cout<<"overflow litres:"<<over(p1,p2,hour,litre)<<endl;
    absent=litre/(p1+p2);
    cout<<"for hours="<<absent;

    
    return absent;
}


float pool(float p1,float p2,float hour,float litre)
{
 float swim,full,overflow;
 swim=(p1+p2)*hour;
 full=((swim/litre)*100);
 return full;
 
}


float pipe1(float p1,float p2)
{
 float per;
 per=(p1/(p1+p2))*100;

 return per;

}

float pipe2(float p1,float p2)
{
 float per;
 per=(p2/(p1+p2))*100;

 return per;

}


float over(float p1,float p2,float hour,float litre)
{
 float swim,overlitres;
 swim=(p1+p2)*hour;
 if(litre<=swim)
 {
  overlitres=swim-litre;
 } 
  return overlitres;
}