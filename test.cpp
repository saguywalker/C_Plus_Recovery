#include <iostream>
 
 //c++ style
void duplicate1(int &a, int &b){
    a *= 5;
    b *= 5;
}

//old-fashioned style
void duplicate2(int *a, int *b){
    *a *= 5;
    *b *= 5;
}

 main(){
    int a = 1, b = 2, c = 1, d = 2;
    duplicate1(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    duplicate2(&c, &d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    return 0;
 }