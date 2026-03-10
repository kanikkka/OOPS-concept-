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
    //destructor
    ~Student(){
        cout<<"hi i delete everything";
        delete cgpaPtr; //bcz ptr is not free we have to delte it
    }
    void info(){
       cout<<name<<endl;
       cout<<*cgpaPtr<<endl;
    }
    


};
int main(){
    Student s1("rahul",8.9);
    s1.info();
    

}