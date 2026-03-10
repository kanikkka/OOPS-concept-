#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    string depr;
    string subject;
    
void changedepr(string newdepr){
    depr=newdepr;
}
void setsalary(int s){
    salary=s;
}
double getsalary(){
    return salary;
}

};
int main(){
    teacher t1;
    t1.name="kanika";
    t1.depr="cse";
    t1.subject="dsa";
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.depr<<endl;
    cout<<t1.getsalary()<<endl;
}