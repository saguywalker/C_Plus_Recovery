/*
    College book store
*/

#include <iostream>

using namespace::std;

class Book{
    private:
        int code;           //the book code
        float price;        //single copy price
        int inventory;         //number on hand
        int prosEnrollment; //prospective enrollment
        bool isRequest;     //true => request, false => optional
        bool isNew;         //true => new, false => used
    public:
        void set(int _code, float _price, int _inventory, int _enroll, int _request, int _new){
            code = _code;
            price = _price;
            inventory = _inventory;
            prosEnrollment = _enroll;
            isRequest = _request;
            isNew = _new;
        }
};

int main(){
    int code, inventory, prosEnrollment;
    float price;
    bool isRequest, isNew;
    cout << "Please enter the book code: ";
    cin >> code;
    cout << "single copy price: ";
    cin >> price;
    cout << "number on hand: ";
    cin >> inventory;
    cout << "prospective enrollment: ";
    cin >> prosEnrollment;
    cout << "1 for reqd/0 for optional: ";
    cin >> isRequest;
    cout << "1 for new/0 for used: ";
    cin >> isNew;

    Book b1;
    b1.set(code, price, inventory, prosEnrollment, isRequest, isNew); 

    return 0;
}