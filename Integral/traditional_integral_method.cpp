#include<iostream>
#include<math.h>
using namespace std;
double fun(double x)
{
return exp(-pow(x,2));
}

int main()
{
float a,b;
a=-50,b=50;
long long n=2000000;//区间分为2百万段 
double h=(b-a)/n; //h是每个区间大小
double s=0;//s是矩形的面积的和
double i=0;
for( i=a;i<b;i+=h){
s=s+((fun(i)+fun(i+h))*h)/2;
}
cout<<"\nresult is "<<s<<endl;cout<<endl;
}

