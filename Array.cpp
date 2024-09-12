# include <iostream>
# include <array>
using namespace std;

int main(){
    array<int ,5> a = {23,56,7,8,9};
    for(int i= 0 ; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd Index -> " << a.at(2) << endl;
    cout << "Element or not -> " << a.empty() << endl;
    cout << "First Element -> "  << a.front() << endl;
    cout << "Last Element -> " << a.back() << endl;
}