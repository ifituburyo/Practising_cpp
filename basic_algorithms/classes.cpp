#include<iostream>
#include<string>
using namespace std;

class Form
{

    private:
       float salary;
       double potential_salary; 



    public: 
         double annualB();
            string name;
            int tips;
            int balance;
    int bonus()
    {
        if (balance>10000)
        {
            tips = 2*(balance);
        }
        else{
            tips = balance;
        }
        std::cout<<endl;
        return tips;
    }
        
   void setSalary(double potentential_salary)
   {  //double potential_salary; 
      //cout<<"input the desired salary: " <<endl;
      salary = potentential_salary; 
   }
   float getSalary()
   {
    return salary = potential_salary *1.1;
   }

    void print()
    {
        std::cout<<"user Name: "<<name<<endl;
        std::cout <<"account balance: "<<balance<<endl;
        std::cout<<"allower tips : "<< tips<<endl;
        std::cout<<"salary worth :" << salary <<endl;
    }
};
double Form::annualB()
{

    return 2*salary;
}



int main()
{ double inputS;
    cout<<"input salary:  "<<endl;
    cin>>inputS;
    Form user1;
    user1.setSalary(inputS);
    user1.getSalary();
    user1.name ="izera";
    user1.balance =5000;
    user1.bonus();
    user1.print();
    user1.annualB();
   // user1.salary;



    Form user2;
     user2.name ="lehema";
     user2.balance= 10000;
     user2.bonus();
     user2.print();
    
     Form user3;

     user3.name="klebert";
     user3.balance=15000;
     user3.bonus();
     user3.print();

}