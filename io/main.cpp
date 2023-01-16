#include <iostream>
#define NAME_MAX_LEN (100)
using namespace std; 

int main() {
    char name[NAME_MAX_LEN];
    cout << "Your name: "; 
    cin >> name;
    cout << "Hello " << name << endl;
    return 0; 
}