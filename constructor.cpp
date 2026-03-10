#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"hello"<<endl;
    }
    
      string name;
      string depr;
      float salary;
};
int main(){
   teacher t1;
   teacher t2;
   t1.name="kanika";
   t1.depr="cse";
   cout<<t1.name<<endl;



}