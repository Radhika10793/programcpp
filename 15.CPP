# include<iostream.h>
#include<math.h>
void cube(int &side)
{
float volume=pow(side,3);
cout<<"volume of cube is :"<<volume;
}
int main()
{
int side;
cout<<"please rnter side:";
cin>>side;
cube(side);
return 0;
}