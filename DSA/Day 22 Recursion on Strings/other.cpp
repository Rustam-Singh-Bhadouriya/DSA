#include <iostream>
using namespace std;

bool palidromeRecursion(string str, int s){

    int e = (str.length()-1)-s;

    // base case
    if (str[s] != str[e]) return false;
    // if anyvalue not exits which is not same and array completely searched
    // then this is comman sence it is palidrome
    if (s > e) return true;
    
    s++;
    // recursive call for more 
    return palidromeRecursion(str, s);
}


int main(){
    // Palidrome meant by a string like "rar" and make it reverse
    // it is also "rar" this is palidrome

    // With Loop 
    // With Recursion

    // Approach -> with will use two pointers 
    // with search and maches there own like s is r and e is r
    // they are equal so we will increase s and descrease e to a
    // they same to return True otherwise if anyone find dismatch
    // return False instantly

    string str = "raar";
    if(palidromeRecursion(str, 0)){
        cout << "This is Palidrome" << endl;
    } else cout << "This is not Palidrome\n";

}