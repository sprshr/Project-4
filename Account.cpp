#include "Account.h"
#include <string>
#include <iostream>
using namespace std;

//constructors
Account::Account(string username, string status){
    this->username = username;
    this->status = status;
}

//destructor
Account::~Account(){
    cout << "Account removed.\n";
}

// getter functions
string Account::getStatus() const{
    return this->status;
}