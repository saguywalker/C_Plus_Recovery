#include <iostream>
#include <composer.h>

const int kMaxComposers = 100;

class Database{
    public:
        Database();
        ~Database();
        Composer& addComposer(std::string _first_name, std::string _last_name, std::string _genre, int _yob, std::string _fact);
        Composer& getComposer(std::string _last_name);
        void displayAll();
        void displayByRank();
    private:
        Composer composers[kMaxComposers];
        int next_slot;
}