#include "DeliveryOrder.h"
#include <iostream>
#include <string>

int DeliveryOrder::orderCount = 0;
const float DeliveryOrder::taxRate = 0.09;
const float DeliveryOrder::deliveryRate = 2;

DeliveryOrder::DeliveryOrder(string name, string date, string phone, float miles){
    this->name = name;
    this->date = date;
    this->phone = phone;
    this->miles = miles;
    this->orderBalance = 0;
    orderCount++;
}

DeliveryOrder::~DeliveryOrder(){
    cout << "DeliveryOrder destroyed.\n";
}

void DeliveryOrder::receipt() const{
    cout << "Order Detail:" << "\n";
    cout << "\tName: " << this->name << "\n";
    cout << "\tDate: " << this->date << "\n";
    cout << "\tPhone: " << this->phone << "\n";
    cout << "\tOrder Balance: $" << this->orderBalance << endl;
}

float DeliveryOrder::getTotalBalance() const{
    return this->orderBalance * (1 + DeliveryOrder::taxRate) + this->miles * DeliveryOrder::deliveryRate;
}