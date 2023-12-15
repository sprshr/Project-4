#ifndef BOBAORDER_H
#define BOBAORDER_H
#include "DeliveryOrder.h"
#include <string>
using namespace std;

class BobaOrder: public DeliveryOrder{
    private:
        string shopName;
        int drinksCount;

    public:
        //constructor
        BobaOrder(string name, string date, string phone, float miles, string shopName);

        //destructor
        ~BobaOrder();

        //member functions
        void receipt() const;
        void addDrink(string drinkName, bool addBoba = true, int count = 1);
        float VIPdiscount() const;
};

#endif //BOBAORDER_H