#include <iostream>
using namespace std;


/*
what is inheritence
inheritence mean if any class have some data members like name and age and a second class need these data
members also we should not going to write them again we inherite that class which contains name and age
which called parent class and which take called child class

EASY LANGUAGE :-
when a class inherite an another class is inheritence like male class inherited human class
and male class can access human class's Data Members

as we can see that we can access weight and height data members with male class
NOTE: We can not access private DMs in child class
*/
// parent class
class Human{
    protected:
        int weight;
        int height;
    
    void printInfo(){
        cout << " Weight: " << this->weight << endl;
        cout << " Height: " << this->height << endl;
    }

};

// child class
// declare = class <child class name> : mode <parent class name>
class male: public Human{
    /*
    Modes = mode mean which kinda we gonna take value
    like private public or protected
    private mean if we change it to private no one can acess this
    class value
    and if public then anyone can
    and if protected then only child class can
    as we can see parent class have protected so only this class can
    use these function and none other
    */

    // some own DMs
    private:
        string color;
        // making DMs private is good practice
        // if class is child and if class is parent then
        // protected will best for only child class access
    
    public:
    void setInfo(string color, int weight, int height){
        this->weight = weight;
        this->height = height;
        this->color = color;
    }

    void printMaleInfo(){
        printInfo();
        cout << " Color: " << this->color << endl;
    }

};

/*
Parent class DMs and function mean getter and setter should
be protected not be private and nor public protected will good 
child class can access them only and child class function
mean getter and setter should be public and DMs should be private
for a full escapsulated class for security :) <3
*/

/*

MORE ON MODES

parent  child = result
private private = none not accessable
private protected = none accessable
private public = none accesaable

public public = public
public private = private
public protected = protected

protected public = protected
protected private = private
protected protected = protected

let understand is parent class is private then any mode
will also private and data members are unaccessable

and if pareC is public and child c also pub then DMs can access

as this think yourself

*/


/*
WHAT IS HIERARCAL INHERITENCE 
when a class serve as a parent clas for two or more then two child class
as we can see human class serves for male and female they both are hierarcal inheritence
*/

// this is hybird any way to inherite multiple class
class Female: public Human, public hair{
    private:
        string color;
    
    public:
    void setInfo(string color, int weight, int height){
        this->weight = weight;
        this->height = height;
        this->color = color;
    }

    void printFemaleInfo(){
        printInfo();
        cout << " Color: " << this->color << endl;
    }

}; // this is second child class which uses Human
// so this is herirarcal inheritence

/*
WHAT IS HYBIRD INHERITENCE
when a a heirarcal and multiclass inheritence occured then it is hybird
inheritence 

in easy language
let assume there's a parent class A and B and C inherited it
then it is hyrarcal
and an another parent class also inherited in c class
mean c had inherited D class and A class this is hybird

in our case
this is hybird inheritence
we can see that male and female inherited human
and female also inherited hair
this is hybird

*/


// second parent class for female
class hair{
    void printDetail(){
        cout << " They Have Long hairs!\n";
    }
};

int main(){
    male m1;
    m1.setInfo("White-skiny", 78, 176);
    m1.printMaleInfo();
    // m1.printInfo(); cant access it
    return 0;
}