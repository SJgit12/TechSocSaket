#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("test.txt", std::ios_base::app);
    string st[1]={"hello"};
    out<<st;
    out.close();



    return 0;
}