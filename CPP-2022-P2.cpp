// {CPP-2022-P2}: Interchange 2 Variables Without A Third Variable
// Source Code: github.com/mrtechtroid/yt


#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "A:";
    cin >>a;
    cout << "B:";
    cin >>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "A:" << a << " B:" << b << endl;

    return 0;
}