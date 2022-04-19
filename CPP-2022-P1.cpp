// CPP-2022-P1: Exchange Two Variable With A Third Variable
// Source Code: github.com/mrtechtroid/yt

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "A:";
    cin >>a;
    cout << "B:";
    cin >>b;
    c = b;
    b = a;
    a = c;
    cout << "A:" << a << " B:" << b << endl;
    return 0;
}
