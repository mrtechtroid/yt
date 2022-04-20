// {CPP-2022-P3}: Finding Area And Circumference Of A Circle
// Source Code: github.com/mrtechtroid/yt


#include <iostream>
using namespace std;

int main(){
    float radius;
    float circum,area;
    cout << "Radius:";
    cin >> radius;
    circum = 44.0/7.0 * radius;
    area = 22.0/7.0 * (radius*radius);
    cout << "Area:" << area << " Circumference:" << circum << endl;
    return 0;
}