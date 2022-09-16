#include <iostream>
using namespace std;
//with get  set fucntion
class Employee 
{private:
    string name; 
    int age;
    string  type; 
public:
    string getname(){
        return name;
    }
    void setname(string Name){
    name=Name;}


    int getAge(){
        return age;
    }
    void setAge(int Age){
    if(Age>=18)
        age=Age;
    }


    void introduction(){
        cout<<"Hi i am "<<name<<" with age  "<<age<< " and i am "<<type<<endl;

    }
    
        Employee(string Name,string Type,int Age){
        name=Name;
        type=Type;
        age=Age;
    }

};


int main(){
    Employee employee1=Employee("ALI","INTERN",20);
    Employee employee2=Employee("AHmed","pre",22);

    /*employee1.name="ALi";
    employee1.age=20;
    employee1.type="contract";
    //cout<<"Hi i am"<<employee1.name<<" with age  "<<employee1.age<< "and i am "<<employee1.type<<endl;
    */
    employee1.introduction();
    employee2.introduction();
    //cout<<employee1.name; NOT WORKING BCZ PRIVATE VAR
    employee1.setname("KHAN");

    cout<<"updated name is "<<employee1.getname()<<endl;
    //check age limitation;
    employee2.setAge(17);
    employee1.setAge(100);

    cout<<"Employee 1 updates AGe is "<<employee1.getAge() <<endl; 
    cout<<"Employee 2 updates AGe is "<<employee1.getAge() <<endl;
return 0;}