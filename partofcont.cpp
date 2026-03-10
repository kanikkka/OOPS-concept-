#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    teacher(string n,string d,string s,double sal){
        name=n;
        depr=d;
        subject=s;
        salary=sal;
        cout<<"hello"<<endl;
    }
    
      string name;
      string depr;
      string subject;
      float salary;
      void info(){
        cout<<"name:"<<name<<endl;
        cout<<"subject"<<subject<<endl;
      }
};
int main(){
   teacher t1("kanika","cse","c++",25000);
   t1.info();
   return 0;

}