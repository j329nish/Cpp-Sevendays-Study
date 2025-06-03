#include <iostream>
#include "counter.h"

using namespace std;

int main(){
    Counter* pC = new Counter();
    pC->count();
    pC->count();
    cout << "回数:" << pC->getCount() << "回" << endl;
    pC->count(4);
    cout << "回数:" << pC->getCount() << "回" << endl;
    pC->reset();
    cout << "回数:" << pC->getCount() << "回" << endl;
    delete pC;
    return 0;
}