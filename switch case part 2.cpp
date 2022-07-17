#include <iostream>

using namespace std;

int main()
{
   /* int a=100;
    int b=200;
    switch(a)
    {

    case 100:
        cout<<"this is the part of outer switch"<<endl;
        switch(b)
        {

        case 200:
            cout<<"this is the part of the inner switch"<<endl;

        }
    }
    cout<<"exact value of a is :"<<a<<endl;
    cout<<"exact value of b is :"<<b<<endl;*/
    char oper_ator;
    float num1,num2;
    cout<<"Enter the operators(+,-,*,/) : ";
    cin>>oper_ator;
    cout<<"Enter the numbers :"<<endl;
    cin>>num1>>num2;
    switch(oper_ator){
case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
    break;
case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
break;
case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
break;
case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

default:
    cout<<"ERROR!The operator is not correct";
    break;


    }
    return 0;
}
//------------------program to build a simple calculator using the switch cases statements-------------
