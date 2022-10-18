#include<iostream>
using namespace std;

int main()
{
    cout << "Calculator App using Switch case" <<endl;
    float num1, num2;
    char operation;

    cout<< "Enter the two number & operation: ";
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':
        cout << num1 << operation << num2 <<" = " << num1 - num2;
        break;

    case '+':
        cout << num1 << operation << num2 <<" = " << num1 + num2;
        break;    

    case '*':
        cout << num1 << operation << num2 <<" = " << num1 * num2;
        break;  

    case '/':
        cout << num1 << operation << num2 <<" = " << num1 / num2;
        break;      

    case '%':
        if((int)num1 && (int)num2)
            cout<< num1 << operation << num2 <<" = " << (int)num1 % (int)num2;
        else
            cout<<"Not Valid";    
        break;    
    
    default:
        cout<< "Not valid operation" <<endl;
        break;
    }
    
    return 0;

}