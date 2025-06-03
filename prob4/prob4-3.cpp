#include <iostream>

using namespace std;

int main(){
    int* num = new int[4];
    int i;
    for (i = 0; i < 4; i++){
        num[1] = i;
    }
    for (i = 0; i < 4; i++){
        cout << "num[" << i << "]=" << i << " ";
    }
    delete [] num;
    cout << endl;
    return 0;
}