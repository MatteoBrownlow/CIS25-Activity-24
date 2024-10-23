#include <iostream>
#include "customer.hpp"
using namespace std;

int main(){
    customer userCustomer;
    cout << "Enter your name: " << endl;
    cin >> userCustomer.name;
    cout << "Enter your email: " << endl;
    cin >> userCustomer.email;
    cout << "Enter your ID number: " << endl;
    cin >> userCustomer.ID;
    cout << "Your name: " << userCustomer.name << endl;
    cout << "Your email: " << userCustomer.email << endl;
    cout << "Your ID number: " << userCustomer.ID << endl;
    return 0;
}
