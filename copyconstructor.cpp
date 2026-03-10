#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    Teacher(string name,string dept,string subject,double salary){
      this->name=name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
    }
    void getinfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
        cout<<salary<<endl;
        cout<<dept<<endl;
    }//copy constructor
    Teacher(Teacher &obj){//by refrence
        cout<<"i am custom costructor"<<endl;
        this->name=obj.name;
        this->dept=obj.dept;
        this->subject=obj.subject;
        this->salary=obj.salary;

    }

};
int main(){
    Teacher t1("kanika","cse","c++",25000);
    
    Teacher t2(t1);
   t2.getinfo();

}