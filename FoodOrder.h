#ifndef FOODORDER_H
#define FOODORDER_H
#include "DeliveryOrder.h"
#include <string>
using namespace std;

class FoodOrder : public DeliveryOrder{
    private:
        string restaurantName;
        int foodCount;

    public:
        //constructor
        FoodOrder(string name, string date, string phone, float miles, string restaurantName);

        //destructor
        ~FoodOrder();

        //member functions
        void receipt() const;
        float VIPdiscount() const;
        void addFood(string mealName, int sides = 0, bool addSoup = false);
};

#endif //FOODORDER_H