#include <iostream>
#include <math.h>

using namespace std;

double simpleExp(double x)
{
    double sum = 1.0;
    double term = 1.0;
    
    int i = 1;
    
    while (sum + term != sum) {
        term *= x / i;
        sum += term;
        
        i++;
    }
    
    return sum;
}

double myExp(double x)
{
    if (x >= 0.0)
        return simpleExp(x);
    else
        return 1.0 / simpleExp(-x);
}

int main(int args, char** argv) 
{
    int argsArr[] = { 1, 5, 10, 15, 20, 25,
                     -1, -5, -10, -15, -20, -25 };
    
    for (int i = 0; i != 12; i++) {
        int x = argsArr[i];
        
        cout << "simpleExp(" << x << ") = " << simpleExp(x) << endl;
        cout << "myExp(" << x << ") = " << myExp(x) << endl;
        cout << "exp(" << x << ") = " << exp(x) << endl << endl;
    }
    
    return 0;
}