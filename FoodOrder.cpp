#include "FoodOrder.h"
#include "InvalidInput.h"
#include <iostream>
#include <string>
using namespace std;

FoodOrder::FoodOrder(string name, string date, string phone, float miles, string restaurantName):DeliveryOrder::DeliveryOrder(name, date, phone, miles){
    this->restaurantName = restaurantName;
}

FoodOrder::~FoodOrder(){
    cout << "FoodOrder destroyed.\n";
}

void FoodOrder::receipt() const{
    // calling receipt from parent function
    DeliveryOrder::receipt();
    cout << "\tFood Count: " << this->foodCount << endl;
}

float FoodOrder::VIPdiscount() const{
    if(this->orderBalance > 50) return 0.8;
    if(this->orderBalance > 30) return 0.9;
    if(this->orderBalance > 20) return 0.95;
    else return 1;
}

void FoodOrder::addFood(string mealName, int sides, bool addSoup){
    float price;
    if(mealName == "Thick Cauliflower Steaks") price = 15;
    else if(mealName == "Rack of Lamb") price = 38;
    else if(mealName == "Organic Scottish Salmon") price = 23;
    else if(mealName == "Grilled Lobster Risotto") price = 46;
    else throw InvalidInput(mealName);
    price += sides*6;
    if(addSoup) price += 5;
    this->foodCount++;
    this->orderBalance += price;
}