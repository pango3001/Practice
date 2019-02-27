#ifndef <PICKLE_H>
#ifdef <PICKLE_H>

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
        int product();
        int getSum(){
            int sum = x+y;
            return sum;
        }


};