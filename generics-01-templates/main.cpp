#include <iostream>
#include <string>

template<typename T>
T max(T a, T b){ // FUNCION CON PARAMETROS TIPO T, GENERICOS
    //if b < a then yield a else yielb b
    // si b < a entonces da a si no da b
    return b < a ? a : b ;
}
int main() {
    std::cout << "Hello, World!" << std::endl;

    //compara dos enteros
    int i=42;
    std::cout <<"max(7,i): "<<::max(7,i)<<"\n";

    //compara dos doubles
    double f1= 3.4; double f2= -6.7;
    std::cout <<"max(f1,f2): "<<::max(f1,f2)<<"\n";

    //compara dos strings, es mas grande la que tenga mas caracteres
    std::string s1= "mathematics"; std::string s2= "math";
    std::cout <<"max(s1,s2): "<<::max(s1,s2)<<"\n";
    return 0;
}
