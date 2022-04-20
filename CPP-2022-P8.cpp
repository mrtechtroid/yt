// {CPP-2022-P8}: Finding If a character is UPPERCASE or lowercase
// Source Code: github.com/mrtechtroid/yt


#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Character:";
    cin >> character;
    if (character >= 'A' && character <='Z'){
        cout << "Its A Capital(Uppercase) Letter" << endl;
    }else {
        if (character >= 'a' && character <= 'z'){
            cout << "Its A Lowercase Letter" << endl;
        }else {
            cout << "Its Not A Alphabet" << endl;
        }
    }


    return 0;
}