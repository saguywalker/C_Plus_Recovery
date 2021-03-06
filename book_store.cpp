/*
    College book store
*/

#include <iostream>
#include <vector>

using namespace::std;

class Book{
    private:
        int code;           //the book code
        float price;        //single copy price
        int inventory;         //number on hand
        int prosEnrollment; //prospective enrollment
        bool isRequire;     //true => request, false => optional
        bool isNew;         //true => new, false => used
    public:
        Book(int _code, float _price, int _inventory, int _enroll, int _request, int _new);
        void display();
};

int main(){
    vector<Book> bs;
    int code, inventory, prosEnrollment, orderAmount;
    float price, orderPrice = 0, ownerCost = 0;
    bool isRequire, isNew;
    bool isContinue = true;
    while(isContinue){
        cout << "Please enter the book code: ";
        cin >> code;
        cout << "single copy price: ";
        cin >> price;
        cout << "number on hand: ";
        cin >> inventory;
        cout << "prospective enrollment: ";
        cin >> prosEnrollment;
        cout << "1 for reqd/0 for optional: ";
        cin >> isRequire;
        cout << "1 for new/0 for used: ";
        cin >> isNew;

        Book book(code,price,inventory,prosEnrollment,isRequire, isNew);
        bs.push_back(book);
        cout << "*************************************************" << endl;
        
        bs.back().display();

        cout << "Need to order: ";
        cin >> orderAmount;
        orderPrice += orderAmount * price;
        ownerCost += 0.8 * orderPrice;
        cout << "Total cost: $" << orderPrice << endl;
        cout << "*************************************************" << endl << endl;

        cout << "Enter 1 to do another book, 0 to stop. ";
        cin >> isContinue;

    }

    cout << "Total for all orders: $" << orderPrice << endl;
    cout << "Profit: $" << orderPrice - ownerCost << endl;
    cout << "*************************************************" << endl;

    return 0;
}

Book::Book(int _code, float _price, int _inventory, int _enroll, int _request, int _new){
    code = _code;
    price = _price;
    inventory = _inventory;
    prosEnrollment = _enroll;
    isRequire = _request;
    isNew = _new;
}

void Book::display(){
    cout << "Book: " << code << endl
            << "Price: " << price << endl
            << "Inventory: " << inventory << endl
            << "Enrollment: " << prosEnrollment << endl << endl
            << "This book is ";
    if (isRequire){
        cout << "required and ";
    }else{
        cout << "optional and ";
    }

    if (isNew){
        cout << "new";
    }else{
        cout << "used";
    }
    cout << endl << "*************************************************" << endl;
}