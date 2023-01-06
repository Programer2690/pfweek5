#include <iostream>
using namespace std;
int timeHours (int hours,int minutes);
int timeMinutes (int hours,int minutes);
main ()
{
  system ("cls");
  int hours;
  int minutes;
  int result;
  int result1;
  while (true){
  cout <<"Enter hours:";
  cin>>hours;
  cout <<"Enter minutes:";
  cin >>minutes;
  result=timeHours(hours,minutes); 
  if (result==24)
  {
    result=0;
  }
  cout<<"hours is:"<<result<<endl;
  result=timeMinutes(hours,minutes);
  cout<<"minutes is:"<<result<<endl;}
  
  
}
int timeHours(int hours,int minutes)
{
  int minutesSum=minutes+15;
  if (minutesSum>=60)
  {
     hours=hours+1;
     return hours;
  } 
  if (minutesSum<60) 
  {
     return hours;
  }
}
int timeMinutes(int hours,int minutes)
{
  int final;
  int minutesSum=minutes+15;
  if (minutesSum>=60)
  {
    final=minutesSum-60;
    return final; 
  }
    return minutesSum;
}
