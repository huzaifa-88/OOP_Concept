#include <iostream>
using namespace std;

class Student{

public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // For shallow copy
    // Student(Student &obj){
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }

    // For deep copy
    Student(Student &obj){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout <<"CGPA: " << *cgpaPtr << endl;
    }

};


int main(){
    Student s1("Ali Ahmad", 3.9);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 3.11;
    s1.getInfo();
    s2.getInfo();
    s2.name = "Aliza";
    s2.getInfo();
    
    return 0;
}