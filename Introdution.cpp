#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    string nama;
    float nilai;
    void print_data(){
        cout << "NIM    ="<< nim <<endl;
        cout << "Nama   ="<< nama<<endl;
        cout << "nilai  ="<< nilai<<endl;
    }
};

int main (){
   mahasiswa mhs; 
   mhs.nim  = 2024;
   mhs.nama = "Alvin";
   mhs.nilai= 99;

   mhs.print_data();
}