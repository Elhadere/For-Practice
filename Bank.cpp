#include<iostream>

using namespace std;

void showbalance(double amount){
    cout << "Your balance is : "<< amount <<"\n"; 
}
double withraw(double balance){
    double amount;
    cout<< "Enter the amount you want to widraw : \n";
    cin >> amount;
    if(amount<0){
        cout << "You can't enter a negative number !!\n";
        return 0;
    }else if (amount >balance){
        cout << "inssufusant balance !!";
        return 0;
    }else{
        return amount;
    }
}
double deposit(){
    double amount;
    cout << "Enter the amount you want to deposit : \n";
    cin >> amount;
    if(amount < 0){
        cout << "You can't enter a negative number !!";
        return 0;
    }else{
        return amount;
    }
}
int main(){
    double balance = 100;
    int choice;
    do
    {
    std ::cout << "****** Bank System ******\n";
    cout << " 1.Your balance \n";
    cout << " 2.Deposit money \n";
    cout << " 3.withraw money\n";
    cout << " 4.Exit \n";
    cin >> choice;

    switch (choice)
    {
    case 1: showbalance(balance);
            break;
    case 2: balance += deposit();
            showbalance(balance);
            break;
    case 3: balance -= withraw(balance);
            showbalance(balance);
            break;
    case 4: cout << "thanks for visiting !! \n";
            cout << "************************************* \n";
            break;
    default:
            cout << "Please enter a valid number\n";
            break;
    }

    } while (choice != 4);
    
    
    
    
    


}