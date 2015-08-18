//
// Created by Иван Павлов on 31.05.15.
//

#include <iostream>
#include <big_integer_improved.h>

using namespace std;

int main() {

    //cout << "OK" << endl;

    big_integer a = big_integer("10000000000000011");
    big_integer b = big_integer("20");
    big_integer c = a + b;
    big_integer d = c - b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}