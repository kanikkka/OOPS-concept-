#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaPtr;
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr=cgpa;
    }
    void info(){
       cout<<name<<endl;
       cout<<*cgpaPtr<<endl;
    }
    Student(Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;

    }

};
int main(){
    Student s1("rahul",8.9);
     Student s2(s1);
     s1.info();
     *(s2.cgpaPtr)=9.2;
     s1.info();
     return 0;
    

}