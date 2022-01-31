#include <string>
#include <iostream>

using namespace std;
int main(){
    string hello("Hello");
    char first = hello.at(0);
    int length = hello.length();
    cout << hello << '\n';
    cout << first << '\n';
    cout << length << '\n';
    return 0;
}