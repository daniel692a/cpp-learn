#include <iostream>

int main(){
    enum Semaforo { ROJO, AMARILO, VERDE};
    Semaforo sem1 = VERDE;
    std::cout<<sem1;
    std::cout<<"\n";
    return 0;
}