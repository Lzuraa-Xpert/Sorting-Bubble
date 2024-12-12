#include <iostream>
#include <conio.h>
using namespace std;

int n;

void tukar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. masukan data"<<"\n";            
cout<<"2. tampilkan data"<<"\n";            
cout<<"3. sorting asc"<<"\n";           
cout<<"4. sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {
int data[100];
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    {
      system("cls");
      cout << "Masukkan jumlah data (1-100): ";
      cin >> n;
      if (n > 0 && n <= 100) {
        cout << "Masukkan " << n << " angka:\n";
        for (int i = 0; i < n; i++) {
          cout << "Data ke-" << (i + 1) << ": ";
          cin >> data[i];
        }
        cout << "\nData berhasil dimasukkan!";
      } else {
        cout << "Jumlah data tidak valid. Harus antara 1-100.";
      }
      getch();
      break;
    }
   case '2':
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}