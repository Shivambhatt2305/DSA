// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<iostream>
using namespace std;

int main(){
    int i,j,r,num=1;
    cout<<"enter number of rows :";
    cin>>r;
    for(i=0;i<r;i++){
        for(j=0;j<=i;j++){
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
    }
}