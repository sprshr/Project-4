#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H
#include <string>
using namespace std;

class DeliveryOrder{
    private:
        string name; //customer's name
        string date; // date of the order
        string phone; // phone number of the customer
        float miles; // number of miles for the delivery
        static int orderCount; // how many orders are place
        static const float taxRate;
        static const float deliveryRate;

    
    protected:
        float orderBalance; // balance of the order which doesn't include delivery fee and tax

    public:
        //constructor
        DeliveryOrder(string name, string date, string phone, float miles);

        //destructor
        ~DeliveryOrder();

        //member functions
        void receipt() const; // prints out the order receipt
        float getTotalBalance() const; // return the total balance(with delivery fee and tax)
        static void getOrderCount();
        virtual float VIPdiscount() const = 0;
};

#endif // DELIVERYORDER_H