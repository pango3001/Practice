//Practice file for working with classes

#include <iostream>

using namespace std;

class Pickle{
    private:
        int x;
        int y;
    public:
        int z;
        void setValues(){
            cout << "First Number: ";
            cin >> x;
            cout << "second Number: ";
            cin >> y;


        }
        int product(){
            int product = x * y;
            return product;
        }


};

int main(){
    Pickle one;

    one.setValues();
    int x = one.product();

    cout << x << endl;

    return 0;
}