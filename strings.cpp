#include <iostream>

int main(){
    //Tener siempre en mente que es la longitud más 1, por el \n
    char name[7] = "Daniel";
    // toda cadena de caracteres al final tiene otro más que es \n, en el ejemplo anterior son 7 en total
    std::cout<<name;
    return 0;
}