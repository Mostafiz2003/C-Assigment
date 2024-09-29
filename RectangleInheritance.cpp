#include<iostream>
using namespace std;

class rectangle{
    public:
    int width, height;

    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class rectanglearea: public rectangle{
    public:
    void input(int w, int h){
        width=w;
        height=h;
    }
    int acccessarea(){
        return width*height;
    }
};

int main(){
    rectanglearea cp;
    cp.input(20,50);
    cp.display();
    cout<<"Area: "<<cp.acccessarea()<<endl;
    return 0;
}