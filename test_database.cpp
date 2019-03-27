#include <iostream>
#include "database.h"

int main(){
    Database db;

    Composer& comp1 = db.addComposer("Ludwig van", "Beethoven", "Romantic", 1770,
                                    "Beethoven was completely deaf during the latter" 
                                    "part of his life - he never "
                                    "heard a performance of his 9th symphony.");

    comp1.promote(7);

    Composer& comp2 = db.addComposer("Johann Sebastian", "Bach", "Baroque", 1685,
                                    "Bach had 20 children, several of whom became famous musicians as well.");
    comp2.promote(5);

    Composer& comp3 = db.addComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
                                    "Mozart feared for his life during his last year - there is some evidence "
                                    "that he was poisoned.");
    comp3.promote(2);

    std::cout << std::endl << "all Composers: " << std::endl << std::endl;
    db.displayAll(); 
}