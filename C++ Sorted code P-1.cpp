#include<iostream>
using namespace std;
void Read(int x[5])
{
 for(int i=0;i<5;i++)
 cin>>x[i];
}
void Swap(int &x,int &y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}
void Sort(int y[5])
{
 for(int i=0;i<4;i++)
 {
 for(int j=i+1;j<5;j++)
 if(y[i]>y[j])
 Swap(y[i],y[j]);
 }
}
void Display(int z[5])
{
 for(int i=0;i<5;i++)
 cout<<z[i]<<" ";
}
int main()
{
 int arr[5];
 cout<<"Pratik Kothari \n";
 cout<<"C++ Sorting Program PRACTICAL-1 \n\n";
 cout<<"Enter Five Numbers : ";
 Read(arr);
 Sort(arr);
 cout<<endl<<"Sorted Array : ";
 Display(arr);
 return 0;
}
