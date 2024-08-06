#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
long double random(int bit)
{
	unsigned long long res=(rand()+rand())&0xff;
	int m,n;
	m=bit/8;
	n=bit%8;
	for (int i=1;i<m;i++)
	{
		res=res<<8;
		res=res|(rand()&0xff);
	}
	for (int i=1;i<n;i++)
	{
		res=res<<1;res=res|(rand()&1);
	}
	return res*1.0/pow(2,bit);
}
int main()
{
	long double y,phi;
    unsigned long long n,i,cnt;
    time_t t;
    int bit,j;
	srand((unsigned)time(&t));
	scanf("%lld %d",&n,&bit);
	for (int k=0;k<10;k++){
	i=0;j=0;cnt=0;
	for (i=0;i<n;i++)
	{
		y=1.0*random(bit);
		phi=1.0*random(bit);
	    phi=phi*M_PI;
	    if (y<0.5*sin(phi)) cnt++;
    }
    double res=1.0*n/cnt;
	double err=10.0*log10(fabs(res-(double)M_PI));
	err=fabs(err); 
	printf("result=%lf\n",res);
	printf("err=%lf\n",err);
}
	return 0;
 } 
