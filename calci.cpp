#include<iostream.h>
#include<math.h>
#include<conio.h>
int main ()
{
clrscr();
float a,b,PI;
int c;
cout<<endl;
cout<<"******************************* Calculator *************************************\n";
cout<<"================================================================================\n";
cout<<"Operations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n";
cout<<"================================================================================\n";
cout<<"1: Division\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl;
cout<<endl;
cout<<"2: Multiplication\t"<<"8: Cos\t\t"<<"\t\t14: Log with base 10"<<endl;
cout<<endl;
cout<<"3: Subtraction\t\t"<<"9: Tan\t\t"<<endl;
cout<<endl;
cout<<"4: Addition\t\t"<<"10: Inverse of Sin"<<endl;
cout<<endl;
cout<<"5: Exponent\t\t"<<"11: Inverse of Cos"<<endl;
cout<<endl;
cout<<"6: Square root\t\t"<<"12: Inverse of Tan"<<endl;
cout<<endl;
cout<<"Enter the function that you want to perform : ";
cin>>c;
cout<<endl;
PI=3.14159265;
switch(c)
{
case 1:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Division = "<<a/b<<endl;
break;
case 2:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Multiplication = "<<a*b<<endl;
break;
case 3:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Subtraction = "<<a-b<<endl;
break;
case 4:
cout<<"Enter 1st number : ";
cin>>a;
cout<<endl;
cout<<"Enter 2nd number : ";
cin>>b;
cout<<endl;
cout<<"Addition = "<<a+b<<endl;
break;
case 5:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Enter the exponent : ";
cin>>b;
cout<<endl;
cout<<"Exponent = "<<pow(a,b)<<endl;
break;
case 6:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Square Root = "<<sqrt(a)<<endl;
break;
case 7:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Sin = "<<sin(a)<<endl;
break;
case 8:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Cos = "<<cos(a)<<endl;
break;
case 9:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Tan = "<<tan(a)<<endl;
break;
case 10:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl;
break;

case 11:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl;
break;
case 12:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl;
break;
case 13:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Log = "<<log(a)<<endl;
break;
case 14:
cout<<"Enter the number : ";
cin>>a;
cout<<endl;
cout<<"Log with base 10 = "<<log10(a)<<endl;
break;
default:
cout<<"Wrong Input"<<endl;
}
 getch();
 return 0;

}