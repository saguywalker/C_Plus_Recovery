/*
    Find the number that is a perfect square
    and also the sum of a series 1..n
*/

#include <iostream>
#include <sstream>

using namespace::std;

bool isPerfectSquare(int &n){
    int i = 2;
    while(i <= n / 2){
        if(i*i == n){
            return true;
        }
        i++;
    }
    return false;
}

bool isSumSeries(int &n){
    int sum = 0;
    int i = 1;
    while(sum < n){
        sum += i;
        if (sum == n){
            return true;
        }
        i++;
    }
    return false;
}

int main(int argc, char **argv){
    /*check number from cmd argument.
    std::istringstream ss(argv[1]);
    int x;
    if (!(ss >> x)){
        std::cerr << "Invalid number: " << argv[1] << endl;
    }*/

    int num = 1226;
    while(true){
        if (isPerfectSquare(num) && isSumSeries(num)){
            cout << "Magic number was found! => " << num << endl;
            break;
        }
        num++;
    }

    return 0;
}