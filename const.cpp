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
        cout<<"name :"<<name<<endl;
        cout<<subject<<endl;
    }

};
int main(){
    Teacher t1("kanika","cse","cse",25000);
    t1.getinfo();

}