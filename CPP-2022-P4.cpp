// {CPP-2022-P4}: Area Of A Triangle Given Its 
//                Three Sides(a,b,c)
// Source Code: github.com/mrtechtroid/yt

#include <iostream>;
#include <math.h>;
using namespace std;

int main(){
    double a,b,c,area,s;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    s = (a+b+c)/2;
    area  = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area:" << area << endl;
    return 0;
}