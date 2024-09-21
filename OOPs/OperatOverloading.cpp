#include <iostream>
# include <string>
using namespace std;

class Person{
private:
    int weight;
public:
    Person(int w = 0){
        weight = w;
    }
    void PrintWeight(){
        cout<< "Weight is " << weight << endl;
    }
    void operator ++ (){ //pre increment 
        ++weight;
    }
    void operator ++ (int){ //post increment 
        weight++;
    }


};





int main(){
    Person Jon(70);
    ++Jon;
    Jon++;
    Jon.PrintWeight();
    return 0;
}