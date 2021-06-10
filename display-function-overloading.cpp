// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

void display(int intValue) {
    cout<<intValue<<endl;
}

void display(char charValue) {
    cout<<charValue<<endl;
}

void display(double doubleValue) {
    cout<<doubleValue<<endl;
}


int main() {
    display('A');
    display(7);
    display(1.2345);
    return 0;
}
