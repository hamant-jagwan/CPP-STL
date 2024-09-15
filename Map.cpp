# include <iostream>
# include <Map>
using namespace std;

int main(){
    map<int ,string> m;
    m[1]  = "hemu";
    m[2] = "jagwan";
    m[3] = "rawat";

    m.insert({5, "pankaj"});
    cout << "before erase" << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 1 -> " << m.count(1) << endl;

    m.erase(1);
    cout << "after erase" << endl;
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i = it ; i != m.end() ; i++ ){
        cout << i->first << endl;
    }

}