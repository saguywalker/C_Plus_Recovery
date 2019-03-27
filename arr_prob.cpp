#include <iostream>
#include <vector>
#include <string>


bool is_sort(std::vector<int> arr);
std::string encrypt(std::string msg, int key);
std::string decrypt(std::string cipher, int key);

int main(int argc, char** argv){
    std::string msg;
    int key;
    std::cout << "Enter Message: ";
    getline(std::cin, msg);
    std::cout << "Enter Key: ";
    std::cin >> key;
    
    std::string cip = encrypt(msg, key);
    std::cout << "Ciphertext: " << cip << std::endl;

    std::cout << "Plaintext: " << decrypt(cip, key) << std::endl; 

    return 0;
}

bool is_sort(std::vector<int> arr){
    if (arr.size() == 1){
        return true;
    }else{
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[i-1]){
                return false;
            }
        }
    }

    return true;
}

//assume that msg include only a-z
std::string encrypt(std::string msg, int key){
    std::vector<char> cip;
    for(char& c: msg){
        int tmp = (int(c) - 97 + key) % 26 + 97;
        cip.push_back(char(tmp));
    }

    return std::string(cip.begin(), cip.end());
}

std::string decrypt(std::string cipher, int key){
    std::vector<char> msg;
    for(char& c: cipher){
        int tmp = int(c) - key;
        if(tmp < 97){
            tmp = 123 - 97 + tmp;
        }
        std::cout << tmp << " ";
        msg.push_back(char(tmp));
    }
    std::cout << std::endl;

    return std::string(msg.begin(), msg.end());
}