#include<iostream>
using namespace std;

void print(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}