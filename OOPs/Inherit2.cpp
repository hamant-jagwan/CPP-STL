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

class derived2 : public base{
   public:
    derived2(){
        cout << "Default Constructor of Derived Class";
    }
    derived2(int d){
        cout << "Para Constructor of Derived Class" << d <<endl;
    }
};


int main(){
    derived2 d;
    // derived d(23) Only take default constructor
    return 0;
}