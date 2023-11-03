#include<iostream>
using namespace std;
int main(){
    int num,last,rev=0;
    cout<<"enter  the number"<<endl;
    cin>>num;
    while(num>0){
        last=num%10;
        rev = rev* 10 +last;
        num=num/10;
    }
    cout<<"the reverse of the number"<<num<<" is "<<rev<<endl;
}