#include "matecas.h"

double absoluto(double x){
    return (x < 0) ? x * -1 : x;
}

double raiz(double x, int n){
    if(x < 0) return -1;
    double t = x;
    for(int i = 0; i < n; i++){
        x = (x + t/x) / 2;
    }
    return x;
}

// Serie de Taylor: e^x = 1 + x + x²/2! + x³/3! + ...
double exponencial(double x){
    double result = 1.0;
    double term   = 1.0;
    for(int i = 1; i <= 100; i++){
        term   *= x / i;
        result += term;
    }
    return result;
}

double normalizar(double x){
    while(x >  PI) x -= 2 * PI;
    while(x < -PI) x += 2 * PI;
    return x;
}

// Serie de Taylor: sin(x) = x - x³/3! + x⁵/5! - ...
double seno(double x){
    x = normalizar(x);
    double result = 0.0;
    double term   = x;
    for(int i = 1; i <= 20; i++){
        result += term;
        term   *= -x*x / ((2*i) * (2*i + 1));
    }
    return result;
}

// Serie de Taylor: cos(x) = 1 - x²/2! + x⁴/4! - ...
double conse(double x){
    x = normalizar(x);
    double result = 0.0;
    double term   = 1.0;
    for(int i = 1; i <= 20; i++){
        result += term;
        term   *= -x*x / ((2*i - 1) * (2*i));
    }
    return result;
}
