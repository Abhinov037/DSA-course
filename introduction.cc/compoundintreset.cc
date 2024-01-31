#include<iostream>
using namespace std;
int main ()
{

int a,p,r,n,t;
/*a=  future value of the investment/loan, including interest;
p =  principal amount (the initial amount of money);
r= annual interest rate (as a decimal);
n= number of times that interest is compounded per unit tt (time in years);
t= time the money is invested/borrowed for, in years;*/
cout<<"enter principle amount"<< endl;
cin>>p;
cout<<"enter intreset rate"<<endl;
cin>>  r;
cout<<"enter number of times that intrest is compounted per unit tt "<<endl;
cin>> n;
cout<<"time the money is invested/borrowed for"<<endl;
cin>>  t;
a=p*(1+r/n)^n*t;
cout << "Future value is " << a << endl;



}