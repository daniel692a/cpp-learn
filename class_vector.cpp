#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ages;
    ages.push_back(10);
    ages.push_back(1400);
    cout << ages.at(0) << '\n';
    cout << ages.capacity();
    return 0;
}