#include <iostream>
#include "matecas.h"

int main(){
    std::cout << "=== Prueba de funciones matecas ===" << std::endl;

    std::cout << "\nabsoluto(-7.5)      = " << absoluto(-7.5)      << std::endl;
    std::cout << "absoluto(3.2)       = " << absoluto(3.2)        << std::endl;

    std::cout << "\nraiz(25, 50)        = " << raiz(25, 50)        << std::endl;
    std::cout << "raiz(2,  50)        = " << raiz(2,  50)         << std::endl;

    std::cout << "\nexponencial(1)      = " << exponencial(1)      << std::endl;
    std::cout << "exponencial(0)      = " << exponencial(0)       << std::endl;

    std::cout << "\nseno(0)             = " << seno(0)             << std::endl;
    std::cout << "seno(PI/2)          = " << seno(PI/2)           << std::endl;

    std::cout << "\nconse(0)            = " << conse(0)            << std::endl;
    std::cout << "conse(PI)           = " << conse(PI)            << std::endl;

    return 0;
}
