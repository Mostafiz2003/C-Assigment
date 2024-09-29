#include<iostream>
#include<conio.h>
using namespace std;

class person{
    public:
    string name;
    int age;

    void display(){
        cout << "Name: " << name << "Age: " << age << endl;
    }
};

class student : public person{
    public:
    int studentid;

    void display1(){
        cout << "Student ID: " << studentid << endl;
        display();

    }
};

int main()
{
    person mas;
    mas.name="Masud Rana";
    mas.age=25;
    mas.display();

    student rik;
    rik.name="Rikon";
    rik.age=22;
    rik.studentid=1002;
    rik.display1();

    getch();
}
