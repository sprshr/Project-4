#include "BobaOrder.h"
#include "InvalidInput.h"
#include <iostream>
#include <string>
using namespace std;

BobaOrder::BobaOrder(string name, string date, string phone, float miles, string shopName):DeliveryOrder::DeliveryOrder(name, date, phone, miles){
    this->shopName = shopName;
}

BobaOrder::~BobaOrder(){
    cout<<"BobaOrder destroyed.\n";
}

void BobaOrder::receipt() const{
    // calling receipt from parent function
    DeliveryOrder::receipt();
    cout << "\tDrinks Count: " << this->drinksCount << endl; 
}

//defining pure virtual function
float BobaOrder::VIPdiscount() const{
    if (drinksCount > 10) return 0.8;
    if (drinksCount > 5) return 0.9;
    if (drinksCount > 2) return 0.95;
    else return 1;
}

void BobaOrder::addDrink(string drinkName, bool addBoba, int count){
    float price;
    if (drinkName == "Green Tea Latte") price = 5.8;
    else if (drinkName == "Brown Sugar Boba Milk") price = 7.8;
    else if (drinkName == "Brown Sugar Pearl Milk") price = 9.8;
    else throw InvalidInput(drinkName);
    if (addBoba) price += 1;
    this->orderBalance += price*count;
    this->drinksCount += count;
}