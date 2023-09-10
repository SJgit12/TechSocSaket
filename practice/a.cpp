#include <iostream>
using std::string;


class Employee {
private:
    string Name;
    string Company;
    int age;

    
public:
void SetName(string name){
    Name=name;
}
string getName(){
    return Name;
}
void SetCompany(string company){
    Company=company;
}
string getCompany(){
    return Company;
}
void SetAge(int Age){
    age=Age;
}
int getAge(){
    return age;
}
void IntroduceYourself() {
        std::cout<<"Name - "<<Name<<std::endl;
        std::cout<<"Company - "<<Company<<std::endl;
        std::cout<<"Age - "<<age<<std::endl;


    }
    Employee(string name,string company,int Age){
        Name=name;
        Company=company;
        age=Age;


    }




};

int main(){
    Employee employee1= Employee("Raju","Amazon",35);
    employee1.IntroduceYourself();
    employee1.SetAge(40);
    std::cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old."<<std::endl;







    return 0;
}
