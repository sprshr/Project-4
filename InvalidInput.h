#ifndef INVALIDINPUT_H
#define INVALIDINPUT_H
#include <string>
#include <iostream>
using namespace std;

class InvalidInput : public exception{
    private:
        const string msg;
    public:
        InvalidInput(string);
        void reason() const;
};
InvalidInput::InvalidInput(string input) : msg(input){};
void InvalidInput::reason() const {
    cout << "Invalid input \"" + msg + "\".\n";
}
#endif //INVALIDINPUT_H