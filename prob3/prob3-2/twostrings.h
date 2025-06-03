#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class TwoStrings{
private:
    string m_string1;
    string m_string2;
public:
    void setString1(string s);
    void setString2(string s);
    string getString1();
    string getString2();
    string getConnectedString();
    int getConnectedLength();
};
 
#endif // _TWOSTRINGS_H_