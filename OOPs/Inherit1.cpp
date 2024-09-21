# include <iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    void area(){
        cout << "area of the Reactange" << length * breadth;
    }
};

class cuboid : public rectangle{
    public :
        int height;
    cuboid(int length = 0, int breadth = 0 , int height =0){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
    
    void volume(){
        cout << "Volume Of Cuboid " << length * breadth * height;
    }
};


int main(){
    cuboid c(23,5,2);
    c.volume();
    
}