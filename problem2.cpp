#include<iostream>
using namespace std;

char pesan[1000];
char hasil[1000];

int main(){
    cout << "Masukkan pesan rahasia: ";
    cin >> pesan;

    int i = 0;

    while(pesan[i] != '\0'){
        if(i == 0){
            hasil[i] = pesan[i];
        }
        else{
            int nilaiSekarang = pesan[i] - 'A' + 1;
            int nilaiSebelumnya = pesan[i-1] - 'A' + 1;

            int nilaiBaru = nilaiSekarang + nilaiSebelumnya;

            nilaiBaru = (nilaiBaru - 1) % 26 + 1;

            char hurufBaru = 'A' + nilaiBaru - 1;

            hasil[i] = hurufBaru;
        }

        i++;
    }

    hasil[i] = '\0';

    cout << "Pesan setelah dienkripsi: " << hasil << endl;

    return 0;
}