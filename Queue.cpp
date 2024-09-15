# include <iostream>
# include <queue>
using namespace std;

int main(){
    queue <string> q;
    q.push("hamant");
    q.push("jagwan");
    q.push(" he ram");

    cout << "First element " << q.front() << endl;
    q.pop();
    cout << "First element " << q.front() << endl;

    cout << "size after pop " << q.size() << endl;
}
