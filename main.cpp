#include<iostream>
#include"Calculator.h"
using namespace std;
void View()
{
char operation;
    double n1,n2;
    cout<<"\t\t==========================================\nCalculator\n\t\t==========================================\n";
    cout<<"Enter the first number : ";cin>>n1;
    cout<<"Enter the second number : ";cin>>n2;
    cout<<"Choose operation [/,*,-,+]: ";cin>>operation;
Calculator process=Calculator(n1,n2);
    switch (operation)
    {
    case '+':
            cout<<n1<<" + "<<n2<<" = "<<process.Add()<<endl;break;
    case '*':
            cout<<n1<<" * "<<n2<<" = "<<process.Production()<<endl;break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<process.Subtract()<<endl;break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<process.Division()<<endl;break;
        case 'e':break;
    default:
            cout<<"Invalid choose"<<endl;break;
        break;
    }
}

int main()
{
    char ans='c';
    while (ans!='e')
    {
    View();
    cout<<"Press any key for another process or e to exit ";cin>>ans;    
    }
}
