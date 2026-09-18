#include<iostream>
using namespace std;

int n, k, pos = 0;

int main(){
    cout<<"Masukkan N: ";
    cin>>n;

    cout<<"Masukkan K: ";
    cin>>k;

    if(k<2){
        k=2;
    }

    int* astronaut = new int[n];

    for(int i=0; i<n; i++){
        astronaut[i] = i+1;
    }

    int jumlah = n;

    cout<<endl<<"Urutan eliminasi: ";

    while(jumlah>1){

        pos=(pos+k-1)%jumlah;

        int eliminated=astronaut[pos];

        cout<<eliminated<<" ";

        // Menghapus astronaut dengan menggeser elemen
        for(int i=pos; i<jumlah-1; i++){
            astronaut[i]=astronaut[i+1];
        }

        jumlah--;

        if(eliminated%2==0){
            k+=2;
        }
        else{
            k--;

            if(k<2){
                k=2;
            }
        }
    }

    cout<<endl<<"Astronaut terakhir: "<<astronaut[0]<<endl;

    delete[] astronaut;

    return 0;
}