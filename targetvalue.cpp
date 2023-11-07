#include<iostream>
using namespace std;
void indi(int *arr,int target){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if((arr[i]+arr[j] )== target){
                cout<< "["<<i << ","<< j <<"]"<<endl;
            }
        }
    }
}

int main(){
    
    int arr[4];
    int target;
    cout<<"enter the interger for array"<<endl;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"enter the target value"<<endl;
    cin>>target;
    indi(arr,target);
}