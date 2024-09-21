# include <iostream>
using namespace std;

class base{
public:
    base(){
        cout << "Default constructor of base class" << endl;
    }
    base(int b ){
        cout << "parameterized constructor of base class " << b << endl;
    }
};

class derived : public base{
    //Empty
};

int main(){
    derived d;
    // derived d(23) Only take default constructor
    return 0;
}