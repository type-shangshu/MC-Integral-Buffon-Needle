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
long long n=2000000;//�����Ϊ2����� 
double h=(b-a)/n; //h��ÿ�������С
double s=0;//s�Ǿ��ε�����ĺ�
double i=0;
for( i=a;i<b;i+=h){
s=s+((fun(i)+fun(i+h))*h)/2;
}
cout<<"\nresult is "<<s<<endl;cout<<endl;
}

