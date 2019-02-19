#include <iostream>
#include <composer.h>

int main(){
    std::cout << std::endl << "Testing the composer class." << std::endl << std::endl;

    Composer comp;

    comp.set_first_name("Ludwig van");
    comp.set_last_name("Beethoven");
    comp.set_composer_yob(1770);
    comp.set_composer_genre("Romantic");
    comp.set_fact("Beethoven was completely deaf during the latter of"
                    "his life - he never heard a performance of his 9th symphony.");
    comp.promote(2);
    comp.demote(1);
    comp.display();
}