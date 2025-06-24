// 1
// 22
// 333
// 4444
// 55555

#include<iostream>
using namespace std;

int  main(){
    int i,j,n;
    cout<<"enter the number of rows ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}