#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    getline(cin,a);
    getline(cin,b);
    if(a.length() < b.length())
        cout << "no" <<endl;
    else
        cout << "go" <<endl;
}