#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cout << "姓を入力:";
    cin >> s;
    cout << "名を入力:";
    cin >> t;
    cout << "名前は「" << s+t << "」です。" << endl;
    return 0;
}