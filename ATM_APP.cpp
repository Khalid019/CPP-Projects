#include<iostream>
using namespace std;

void displayMenu(){
    cout<<"*************** Welcome to the WHT Bank *****************"<<endl;
    cout<<"Please Select An Option Below"<<endl;
    cout<<"Option 1. Check The Balance"<<endl;
    cout<<"Option 2. Deposit Money"<<endl;
    cout<<"Option 3. Withdraw Money"<<endl;
    cout<<"Option 4. Exit"<<endl;
    cout<<"*********************************************************"<<endl;
}

int main()
{
    displayMenu();
    int Option;
    double Balance = 500;

    do{
    cout<<"Enter the option: ";
    cin>> Option;
    system("cls");
//Using switch case selec option
    switch (Option)
    {
    case 1:
        cout<<"Current Balance is: "<< Balance <<endl;
        break;
    case 2:
        double DepositAmount;
        cout<<"Deposit amount: ";
        cin>>DepositAmount;
        Balance += DepositAmount;
        break; 
    case 3:
        double WithdrawAmount;
        cout<<"Withdraw amount: ";
        cin>> WithdrawAmount;
        if(Balance >= WithdrawAmount)
            Balance -= WithdrawAmount;
        else
            cout<<"Insufficient Balance" <<endl;   
        break;    
    }
    }while(Option != 4);
    
    return 0;

}