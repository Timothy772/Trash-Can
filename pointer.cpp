#include <iostream>

using namespace std;

int kuadrat(int a){
    return (a * a);
}

int main(int argc, char){
    int a = 2; 
    int *aptr = nullptr;
    aptr = &a;
    cout << kuadrat(a);
    cout << "\n" << *aptr;
}