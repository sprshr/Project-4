#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class Account{
    private:
        string username;
        string status;
    
    public:
        // constructor
        Account(string username, string status = "Regular");
        // destructor
        ~Account();

        // getter functions
        string getStatus() const;

};

#endif //ACCOUNT_H