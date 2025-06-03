#include <iostream>
#include "function.h"

using namespace std;

int Function::max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    return n2;
}

int Function::min(int n1, int n2) {
    if (n1 > n2) {
        return n2;
    }
    return n1;
}