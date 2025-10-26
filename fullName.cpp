#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

string concatString(string string1, string string2);

int main(){
    string firstName = "Lionel";
    string lastName = "Messi";
    string fullName = concatString(firstName, lastName);
    cout << "Hello "<<fullName<<endl;
    return 0;
}

string concatString(string string1, string string2){
    return string1+" "+string2;
}