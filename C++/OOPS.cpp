#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string job_name;
    float salary;
    int age;

    // if we want that class will call when we create object
    Employee(string name, float salary, int secretPassword)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = secretPassword;
    }

    void printDetails()
    {
        cout << this->name << " " << this->salary << "$ Per Month" << endl;
        // we use -> for print details in a class function
    }
    void printSecret()
    {
        cout<<"Secret password: "<<this->secretPassword<<endl;
    }

// private only acess in class
private:
    int secretPassword;
};

class programmer : public Employee
{
    public:
        programmer(string name, float salary, int secretPassword) : Employee(name, salary, secretPassword) {};
        void pp(){
            cout<<"Helloo"<<endl;
        }
};

int main()
{
    // Write your code here
    // calling
    Employee Emp("Rustam", 999, 884099); // created an emp named employee
    // Emp.name = "Rohit";
    // Emp.job_name = "Software Engeener";
    // Emp.salary = 350000.50;
    // Emp.age = 24;

    // cout<<Emp.name<<" "<<Emp.salary<<" "<<Emp.job_name<<"Per Month"<<" "<<Emp.age<<endl;
    Emp.printSecret();
    Emp.printDetails();
    programmer pro("Rohit" , 888 , 39433);
    pro.printSecret();
    pro.printDetails();

    return 0;
}