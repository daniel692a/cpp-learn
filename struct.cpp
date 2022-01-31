#include <iostream>
struct Employee {
    int id;
    float wage;
};

int main(){
    Employee e1;
    e1.id = 1;
    e1.wage = 434.9;
    std::cout<<e1.id;
    return 0;
}