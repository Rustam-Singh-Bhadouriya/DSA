#include <iostream>
using namespace std;

/*

WHAT IS ESCAPSULATION :-
escapsulation is nothing but wrapping of data members and
function called escapsulation

like
name and highSpeed are data members and getters and setters
are functions
and this called escapsulation
where data members and function work with together 
for Data I/O

and an fully encapsulated class have all data members 
private else semi encapsulation class have some data members
private and some public

NOTE: an fully encapsulated class is generally mode better then other
    cuz this made security

encapsulation = security

*/


class Car{
    private:
        // data members
        string name;
        int highSpeed;
    

    public:
    // getters
    void printInfo(){
        cout << "Name: " << this->name << endl;
        cout << "High Speed: " << this->highSpeed << endl;
    }

    // setters
    void setInfo(string carName, int Speed){
        this->name = carName;
        this->highSpeed = Speed;
    }
};

int main(){
    cout << "Hello OOPS!" << endl;
    Car GTR;
    // we cant access data members so we use getter and setter
    GTR.setInfo("Nissan GTR", 520); // Setting Value
    GTR.printInfo(); // printing Value
    return 0;
}