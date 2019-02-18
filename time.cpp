#include <iostream>

class Time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        void set(int _hours, int _minutes, int _seconds){
            hours = _hours;
            minutes = _minutes;
            seconds =_seconds;
        }
        void increment();
        void display();
        void decrement();
};

void Time::increment(){
    seconds++;
    minutes += seconds/60;
    hours += minutes/60;
    seconds %= 60;
    minutes %= 60;
    hours %= 24;
}

void Time::decrement(){
    seconds--;
    if (seconds < 0){
        minutes--;
        seconds += 60;
    }
    if (minutes < 0){
        hours--;
        minutes += 60;
    }
    if (hours < 0){
        hours += 24;
    }
}

void Time::display(){
    std::cout << (hours % 12 ? hours %12:12) << ':'
            << (minutes < 10 ? "0":"") << minutes << ':'
            << (seconds < 10 ? "0":"") << seconds
            << (hours << 12 ? " AM": " PM") << std::endl;
}

int main(){
    Time timer;
    timer.set(23, 59, 57);
    for (int i = 0; i < 5; i++){
        timer.increment();
        timer.display();
        std::cout << std::endl;
    }

    std::cout << "*******************************" << std::endl;

    for (int i = 0; i < 5; i++){
        timer.decrement();
        timer.display();
        std::cout << std::endl;
    }
}