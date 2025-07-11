//Inheritance with Types

#include <iostream>
#include <string>
using namespace std;

// // Multilevel Inheritance
// class Person{
// public:
//     string name;
//     int age;
// };

// class Student: public Person{
// public:
//     int rollNo;
// };

// class GradStudent: public Student{
// public:
//     string researchArea;
// };

// //Multiple Inheritance
// class Student{
// public:
//     string name;
//     int rollNo;
// };

// class Teacher{
// public:
//     string subject;
//     double Salary;
// };

// class TA: public Student, public Teacher{
// public:
// };


int main(){


    // //Multiple Inheritance
    // TA t1;
    // t1.name = "Huzaifa Mumtaz";
    // t1.subject = "System Programming";

    // cout << t1.name << endl;
    // cout << t1.subject << endl;

    // //Multilevel Inheritance
    // GradStudent s1;
    // s1.name = "Sami ul Rehman";
    // s1.researchArea = "Quantum Physics";

    // cout << "Name:" << s1.name << endl;
    // cout << "Research Area:" << s1.researchArea << endl;
    return 0;
}








// #include <iostream>
// #include <string>
// using namespace std;


// // Also implement Encapsulation where Properties and methods are in single class like teacher class. And for 
// // data hiding we have implement in Teacher also in account class
// class Teacher{
//     //properties/attributes
// private:
//     double salary; //Data hiding
// public:
//     string name;
//     string dept;
//     string subject;
//     // Constructor
//     Teacher(string name, string dept, string subject, double salary){
//         cout << "I am parameterized Constructor...\n";
//         this->name = name;
//         this->dept=dept;
//         this->subject=subject;
//         this->salary = salary;
//     }

//     // Destructor
//     ~Teacher(){
//         cout << "This is Destructor" << endl;
//     }

//     // Copy constructor. It can be created automatically if not defined here
//     // in this object is pass by reference which means if we change anything in other objects, It must be changed in this constuctor 
//     // Teacher(Teacher &orgObj){
//     //     cout << "I am Custom Copy constructor..\n";
//     //     this->name = orgObj.name;
//     //     this->dept = orgObj.dept;
//     //     this->subject = orgObj.subject;
//     //     this->salary = orgObj.salary;
//     // }
    
//     //methods
//     // void changeDept(string newDept){
//     //     dept = newDept;
//     // }

//     void getInfo(){
//         cout << "Name: " << name <<endl;
//         cout << "Department: " << dept <<endl;
//         cout << "Subject: " << subject <<endl;
//     }

//     void setSalary(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }
// };

// class Account{
// private:
//     string password;
//     double balance;  //Implement data hiding
// public:
//     string accountID;
//     string username;
// };

// int main(){
//     Teacher teacher1("Atif Aslam", "Computer Science", "OOP", 56000);
//     teacher1.getInfo();

//     // Teacher t2(teacher1);  //Custom copy constructor ---invoke
//     // t2.getInfo();
//     // teacher1.name = "John Doe";
//     // teacher1.dept = "Computer Science";
//     // teacher1.subject = "Data Structures";
//     // teacher1.setSalary(45000);
//     // cout << "Name: " << teacher1.name<<endl;
//     // cout << teacher1.getSalary();

//     return 0;
// }