#include<iostream>
using namespace std;

int main()
{
    int UserPin = 1234, pin, errorCounter = 0;

    do{
        cout << "Enter the pin: ";
        cin >> pin;
        if(pin != UserPin)
            errorCounter++;
    }while(errorCounter <3 && pin != UserPin);

    if (errorCounter < 3 )
        cout << "Loading ....";
    else
        cout << "Blocked ....";    
    
    return 0;

}