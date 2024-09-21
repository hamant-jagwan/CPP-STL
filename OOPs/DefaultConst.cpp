# include <iostream>
# include <string>
using namespace std;

class Person{
private:            // by default access specifier is "private"
    string name;
    int age;
    float height;
public:
    Person(){
        name = "Null";
        age = 0;
        height = 0.0f;

    }

    void getData(){
        cout << endl << "Name " << name;
        cout << endl << "Age " << age;
        cout << endl << "Height " << height; 
    }


};

int main(){
    Person obj ;
    obj.getData();
}