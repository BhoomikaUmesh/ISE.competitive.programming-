#include<iostream>
using namespace std;
int main()
{
int t,m,h,BMI;
 cin>>t;
while(t--)
{
  cin>>m;
  cin>>h;
   BMI=(m/(h*h));
    cout<<"1:underweight\n2.Normal weight\n3.Overweight\n4.Obesity"<<endl;
    if(BMI<=18)
    cout<<"1"<<endl;
    else if(BMI>=19&&BMI<=24)
    cout<<"2"<<endl;
    else if(BMI>=25&&BMI<=29)
    cout<<"3"<<endl;
    else
    cout<<"4"<<endl;
}
}
