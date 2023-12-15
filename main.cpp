#include "DeliveryOrder.h"
#include "BobaOrder.h"
#include "FoodOrder.h"
#include "Account.h"
#include <string>
#include <iostream>
using namespace std;

//discount function
float applyDiscout(DeliveryOrder* order, const Account& account){
    string status = account.getStatus();
    if (status == "Owner") return order->getTotalBalance() * 0.1;
    if (status == "VIP") return order->getTotalBalance() * order->VIPdiscount();
    else return order->getTotalBalance();
}

int main(){
    // Accounts
    const Account stuart = Account("Stuart", "Owner");
    Account kevin = Account("Kevin", "VIP");
    Account bob = Account("Bob");

    // order pointer
    DeliveryOrder *order;

    // kevin ordering boba
    cout <<  "Kevin is placing order.\n";
    //order = &BobaOrder("Kevin", "11/20/2023", "123-456-0000", 10.4, "M Tea");
    return -1;
}