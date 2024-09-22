# include <iostream>
using namespace std;

class base{
public : 
    void msg(){
        cout << "Base Class";
    }
};
class derived : public base {
public : 
    void msg(){
        cout << "derived Class" << endl;
        base :: msg();  // getting the function msg() of the base class 
    }
};

int main(){
    derived a ;
    a.msg();
}


// Output: 

// derived Class
// Base Class