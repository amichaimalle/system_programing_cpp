/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 31819????
 */

#include <iostream>
using namespace std;

class checkprint{
public:
    char *color;
    checkprint(char *string1);
};

checkprint::checkprint(char *string1) {
    color = new char[strlen(string1)+1];
    strcpy(this->color,string1);
}

int main() {
    char *c = "red";
    checkprint abc(c);
    cout << "what:  ";
    cout << abc.color << endl;
}
