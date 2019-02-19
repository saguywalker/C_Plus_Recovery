#include <iostream>

const int kDefaultRanking = 10;

class Composer{
    public:
        Composer();
        ~Composer();
        void set_first_name(std::string _first_name);
        void set_last_name(std::string _last_name);
        void set_composer_yob(int _composer_yob);
        void set_composer_genre(std::string _genre);
        void set_ranking(int _ranking);
        void set_fact(std::string _fact);
        std::string get_first_name();
        std::string get_last_name();
        int get_composer_yob();
        std::string get_composer_genre();
        int get_ranking();
        std::string get_fact();

        void promote(int increment);
        void demote(int decrement);
        void display();
    private:
        std::string first_name;
        std::string last_name;
        int composer_yob;
        std::string composer_genre;
        std::string fact;
        int ranking;
};