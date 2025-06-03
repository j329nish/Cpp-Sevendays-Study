#include <iostream>
#include "fighter.h"
 
using namespace std;
 
int main(){
    Fighter f;
    Airplane a;
    a.fly();
    f.fly();
    f.fight();
    return 0;
}