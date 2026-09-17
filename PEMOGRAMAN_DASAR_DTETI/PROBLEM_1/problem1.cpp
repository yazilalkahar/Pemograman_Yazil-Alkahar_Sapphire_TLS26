#include<iostream>
#include<vector>
using namespace std;
int n,k,pos=0;
int main(){
    cout<<"Masukkan N: ";
    cin>>n;
    cout<<"Masukkan K: ";
    cin>>k;
    if(k<2){
        k=2;
    }
    vector<int> astronaut;
    for(int i=1; i<=n; i++) {
        astronaut.push_back(i);
    }
    cout<<endl<<"Urutan eliminasi: ";
    while(astronaut.size()>1){
        pos=(pos+k-1)%astronaut.size();
        int eliminated=astronaut[pos];
        cout<<eliminated<<" ";
        astronaut.erase(astronaut.begin()+pos);
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
    return 0;
}