#include <iostream>
# include <stack> 
using namespace std;

int main(){
    stack <string> s ;

    s.push("love");
    s.push("hemu");
    s.push("jagwan");

    s.pop();

    cout << "Top Element -> " << s.top() << endl;
    cout << "Empty or not -> " << s.empty() << endl;
}