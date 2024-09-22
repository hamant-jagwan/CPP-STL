# include <iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout << "Base Class " << endl;  
    }
};

class derv1 : public Base{
    public: 
        void show(){
            cout << "Derived Class 1" << endl;

        }
};

class derv2 : public Base{
    public :
        void show(){
            cout << "Derived class 2" << endl;
        }
};

int main(){
    Base *ptr ;
    ptr = new derv1();
    ptr -> show();
    ptr = new derv2();
    ptr->show();
}
// Because of virtual output is 
// Derived Class 1
// Derived class 2