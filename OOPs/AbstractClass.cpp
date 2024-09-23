#include <iostream>
using namespace std;

class parent{ // Abstract Class
    public:
    
    virtual void show() = 0;
};

class boy : public parent{
    public : 
    void show(){
        cout << "Brown bun " << endl;
    }
};

class girl : public parent{
    public:
    void show(){
        cout << "Pink bun " << endl;
    }
};

int main(){
    parent *ptr ;
    ptr = new boy();
    ptr -> show();
    ptr = new girl();
    ptr -> show();
   

}