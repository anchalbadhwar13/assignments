#include "AList.h"
#include <iostream>
using namespace std;

int main(){

    // AList <string> L;
    // L.addLeft("Hi");
    // L.addRight("Anchal Badhwar");
    // L.ddisplay();


    AList<int> List;
    List.addLeft(1);
    List.addLeft(2);
    List.addRight(1);
    List.addRight(4);
    List.addRight(5);
    List.addRight(6);
    List.addRight(7);
    List.removeLeft();
    List.removeRight();
    cout << List.empty() << endl;
    
    List.clear();

    cout << List.empty() << endl;
    List.addRight(2);
    List.addLeft(3);
    List.display();

    return 0;
}

