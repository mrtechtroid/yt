// {CPP-2022-P6}: Finding The Largest, Second Largest 
//                And Smallest Using Simple IF
// Source Code: github.com/mrtechtroid/yt

#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    double largest = a;
    if (b>largest){
        largest = b;
    }
    if (c>largest){
        largest = c;
    }
    double smallest = a;
    if (b<smallest){
        smallest = b;
    }
    if (c<smallest){
        smallest = c;
    }
    double sum = a+b+c;
    double seclarge = sum - largest - smallest;
    cout << "Order:" << largest << ">" << seclarge << ">" << smallest << endl;








    return 0;
}