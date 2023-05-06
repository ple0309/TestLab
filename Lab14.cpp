#include <iostream>
#include <string>   
using namespace std;

int main()
{
    string firstName;
    string lastName;

    cout <<"Enter your first name: " << endl;
    cin >> firstName;
    cin.ignore();

    cout << "Enter your last name: " << endl;
    cin >> lastName;

    cout << "Hello " << firstName << " " << lastName << endl;
    
    return 0;
}