#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    // while
    cout << "While Loop" << endl;
    int i = 1;
    while (i <= 10)
    {
        cout << i << ". I Can Learn C++!" << endl;
        i++;
    }
    cout << " " << endl;

    cout << "for Loop" << endl;
    // for loop
    for (int j = 1; j <= 10; j++)
    {
        cout << j << ". Happy Coding!" << endl;
    }
    cout << " " << endl;
    cout << "Do-While Loop" << endl;
    // it will exicute at least one time
    int ij = 1;
    do
    {
        cout << ij << ". Coding is Very Good" << endl;
        ij++;
    } while (ij <= 10);

    return 0;
}