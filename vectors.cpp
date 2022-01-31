#include <iostream>

int main(){
    float months[3] = {320.7, 3.54, 322.4};

    std::cout<<months[0]<<'\n';
    months[0] = 3545.7;
    std::cout<<months[0];
    return 0;
}