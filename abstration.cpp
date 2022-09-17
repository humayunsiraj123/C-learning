#include <iostream>
using namespace std;
//with get  set fucntion
/*ABStraction is basically hiding complex or essentail part of your code na donly 
dispalying the simple one means only related function or data is to be display
and it si essentail to use the method if abstratc any in signing class 
*/
class AbstractEmployee{
    virtual void Askforpromotion()=0;
};


class Employee :AbstractEmployee{
public:
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

    void Askforpromotion(){
        if(age>35){
            cout<<"Hello Mr/Ms "<< name<<" you got promoted"<<endl;
        
        }
        else
        {
            cout<<"Hello Mr/Ms "<< name<<" sorry you can get promoted"<<endl;
        
        }
        
    }
    
    Employee(string Name,string Type,int Age){
        name=Name;
        type=Type;
        age=Age;
    }

};


int main(){
    Employee employee1=Employee("ALI","INTERN",23);
    Employee employee2=Employee("AHmed","pre",38);
    employee1.Askforpromotion();
    employee2.Askforpromotion();



















    /*employee1.name="ALi";
    employee1.age=20;
    employee1.type="contract";
    //cout<<"Hi i am"<<employee1.name<<" with age  "<<employee1.age<< "and i am "<<employee1.type<<endl;
    
    employee1.introduction();
    employee2.introduction();
    //cout<<employee1.name; NOT WORKING BCZ PRIVATE VAR
    employee1.setname("KHAN");

    cout<<"updated name is "<<employee1.getname()<<endl;
    //check age limitation;
    employee2.setAge(17);
    employee1.setAge(100);
//as age is below the limt so all the values is same above the range
    cout<<"Employee 1 updates AGe is "<<employee1.getAge() <<endl; 
    cout<<"Employee 2 updates AGe is "<<employee1.getAge() <<endl;*/   
return 0;}