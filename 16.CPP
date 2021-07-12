#include<iostream.h>
#include<math.h>
void cylin(int &rad,int &h)
{
float pi=3.14;
float volue =(pi*pow(rad,2)*h);
cout<<"volume of cylinder is:"<<volue;
}
int main()
{
int rad,h;
cout<<"enter the radius of cylinder:";
cin>>rad;
cout<<"enter the height of the cylinder:";
cin>>h;
cylin(rad,h);
return 0 ;
}