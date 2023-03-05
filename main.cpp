// BOBO-CAT //
/* Misi dari program */
// 1. Berinteraksi dengan user
//  a. Bercanda b. Bermain c. Berinteraksi
// 2. Pada bagian pertama terdapat [-] Dari program [+] Dari user
// - Tampilan / ascii art seekor kucing
// - BOBO memberi salam kepada user
// + Interaksi dari user ke bobo
// - Bobo membalas jawaban balasan pembuka dari user
// - Bobo memberi opsi/pilihan kepada user
// a. Lanjut berbicara b. Game/teka-teki c. cerpen
// -a] Pada bagian ini Bobo melanjutkan perbincangannya dengan user dari percakapan dari awal/salam
// -a] Bobo memberi serta manjawab perkataan dengan menggunakan IF/Switch
// +a] User terus berbincang
// -a] Perbincangan Bobo dengan user diawali dengan kabar
// Algoritma masih berlanjut

/* Demo pada bagian A */
#include <iostream>
#include <stdio.h>
using namespace std;
// Main code
int main()
{
    // Head on the program
    // Ascii code
    string User, Tinggal, Umur;
    string Bobo = "Bobo :~ ";
    char Hj1;

cout << "========================================\n";
cout << "===== The program created by Zacky =====\n";
cout << "========================================\n";
cout << "\n";
cout << "=======================================\n";
cout << "    //   ) )                           \n";
cout << "   //___/ /   ___     / __      ___    \n";
cout << "  / __  (   //   ) ) //   ) ) //   ) ) \n";
cout << " //    ) ) //   / / //   / / //   / /  \n";
cout << "//____/ / ((___/ / ((___/ / ((___/ /   \n";
cout << "=======================================\n";
cout << "\n";
// Main code
cout << "~Ingin berbincang dengan bobo? (Y/T) : ";
cin >> Hj1;
cout << "\n";
switch (Hj1)
{
    case 'Y' : cout << "Bobo : `Ey, selamat datang rumahku!\n\n";
    break;
    case 'T' : cout << "Bobo : `Pergi sana!\n\n";
    break;
    default : cout << "Error!\n\n";
}
switch (Hj1)
{
    case 'Y' : cout << "============ BICARA =============\n";
    break;
}
// Talk with bobo
cout << Bobo << "Oiya nama kamu siapa?" << endl;
cout << "Nama kamu : ";
cin >> User;
cout << Bobo << "Oh hay " << User << endl;
cout << Bobo << User << ", Kamu tinggal dimana?" << endl;
cout << "Tempat tinggal : ";
cin >> Tinggal;
cout << Bobo << "Wah kamu orang " << Tinggal << "kah?" << endl;
cout << "User (Y/T) : ";
cin >> Hj1;
switch (Hj1)
{
    case 'Y' : cout << "Wih, keren juga kamu " << User << endl;
    break;
    case 'T' : cout << "Astaga, aku pikir kamu orang " << Tinggal << endl;
    break;
    default : cout << "ERROR!";
}

// The second code

}
