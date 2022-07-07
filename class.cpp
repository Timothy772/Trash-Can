#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string name;
        string nim;

        Mahasiswa(string nameInput, string inputNim){
            Mahasiswa::name = nameInput;
            Mahasiswa::nim = inputNim;

            cout << Mahasiswa::name << "\n";
            cout << Mahasiswa::nim << "\n";
        }
};

int main(){
    Mahasiswa input = Mahasiswa("timothy", "A11.2021.13887");
    return 0;
}