#include<iostream>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long, int, int);
 int main()
 {
 cout<<"Pratik Kothari \n";
 cout<<"C++ PRACTICAL-2 \n\n";
 cout<<"\nOUTPUT =\n";
 cout<<"Volume of cube is "<<volume(10)<<"\n";
 cout<<"Volume of cylinder is "<<volume(2.5, 8)<<"\n";
 cout<<"Volume of rectangular box is "<<volume(100,75,15)<<"\n";
 return 0;
 }
 int volume(int s)
 {
 return(s*s*s);
 }
 double volume(double r, int h)
 {
 return (3.14*r*r*h);
 }
 long volume(long l, int b, int h)
 {
 return(l*b*h);
 } 
 


 
//Factorial of a number
#include<iostream>
using namespace std;

int main()
{
   
    int a,b,c=1;
    cout<<"enter the number\n";
    cin>>b;
    for(a=1;a<=b;a++)
    {
      c=a*c;
    }
    cout<<c;
    
    return 0;
}



//Program of Complex Number
/*#include<iostream>
using namespace std;
class complex
{
public:
float real,img;
complex()
{real=0;img=0;}
complex(float,float);
complex Addition(complex,complex);
complex subtraction(complex,complex);
complex Multiplication(complex,complex);
complex Division(complex,complex);
};
complex::complex(float r,float i)
{
real=r;
img=i;
}
complex complex::Addition(complex a,complex b)
{
complex temp;
temp.real=a.real+b.real;
temp.img=a.img+b.img;
return(temp);
}
complex complex::subtraction(complex a,complex b)
{
complex temp;
temp.real = a.real - b.real;
temp.img = a.img - b.img;
return(temp);
}
complex complex::Multiplication(complex a,complex b)
{
complex temp;
temp.real = a.real*b.real - a.img*b.img;
temp.img = a.real*b.img + a.img*b.real ;
return(temp);
}
complex complex::Division(complex a,complex b)
{
complex temp;
float new_temp;
new_temp=(b.real * b.real) + (b.img * b.img);
temp.real=((a.real * b.real) + (a.img * b.img)) / new_temp;
temp.img=((a.img * b.real) - (a.real * b.img)) / new_temp;
return(temp);
}
int main()
{
complex a(2,6);
complex b(4,1);
complex c;
cout<<"Pratik Kothari \n";
 cout<<"C++ PRACTICAL-3 \n\n";
cout<<"\nThe first complex number = ";
cout<<a.real<<" and "<<a.img<<"i ";
cout<<"\n The second complex number = ";
cout<<b.real<<" and "<<b.img<<"i ";
cout<<"\n\n\t\t arithmetic operations ";
c=c.Addition(a,b);
cout<<"\n The addition of two complex number = ";
cout<<c.real<<" and "<<c.img<<"i ";
c=c.subtraction(a,b);
cout<<"\n The Subtraction of two complex number = ";
cout<<c.real<<" and "<<c.img<<"i ";
c=c.Multiplication(a,b);
cout<<"\n The multiplication of two complex number = ";
cout<<c.real<<" and "<<c.img<<"i ";
c=c.Division(a,b);
cout<<"\n The division of two complex number = ";
cout<<c.real<<" and "<<c.img<<"i ";
cout<<endl;
return 0;
}
*/
