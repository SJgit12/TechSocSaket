#include <iostream>
#include <fstream>

using std::string;


class BankAccount {
    string Name;
    int AccNo;
    double Balance;
    int PIN;


    
public:
void create_account();
void display_details();
};


void BankAccount::display_details() {
        std::cout<<"Name - "<<Name<<std::endl;
        std::cout<<"Account Number - "<<AccNo<<std::endl;
        std::cout<<"PIN - "<<PIN<<std::endl;
        std::cout<<"Balance - "<<Balance<<std::endl;
    };


void BankAccount::create_account(){
       
    std::cout<<"welcome to creating a new account"<<std::endl;
    std::cout<<"what would you like to have as the name for your account"<<std::endl;
    std::cin>>Name;
    std::cout<<"enter the starting amount for your account"<<std::endl;
    std::cin>>Balance;
    std::cout<<"what would you like to have as the PIN for your account"<<std::endl;
    std::cin>>PIN;
    std::cout<<"enter the account numer (10 digits)"<<std::endl;
    std::cin>>AccNo;

};

void write_account(){
    BankAccount ac;
    ofstream out;
    out.open("Account.dat",ios::binary|ios::app);
    ac.create_account();
    

}

int main(){
    BankAccount B;
    B.create_account();
    return 0;
}
