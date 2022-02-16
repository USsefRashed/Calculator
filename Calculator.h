#include<iostream>
using namespace std;
class Calculator
{
protected:

double num1;
double num2;
double DivCheck(double x,double y)
{
    //check the sec number
    if(y==0)
    {
        throw "Math error !";
    }
    return x/y;
}

public:
Calculator(double n1,double n2)
{
num1=n1;
num2=n2;
}

double Add()
{
    return num1+num2;
}
double Subtract()
{
    return num1-num2;
}
double Production()
{
    return num1*num2;
}

double Division()
{
    double inst=0;
    //instance of num2
    try
    {
        return DivCheck(num1,num2);
    }
    catch(const char* msg)
    {
        while (true)
        {
            cout<<msg;
            cout<<"Enter the second number again : ";cin>>num2;
            if(num2!=0)
            break;
        }
    }
    return num1/num2;
}

};