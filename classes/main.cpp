//Practice file for working with classes

#include <iostream>
#include <pickle.h>
using namespace std;

int main(){
    Pickle one;

    one.setValues();
    int x = one.product();
    int y = one.getSum();
    cout << x << endl;

    Pickle two;
    two.setValues();
    int p = two.getSum();

    cout << p << endl;

    return 0;
}