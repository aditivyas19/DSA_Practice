#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int decNum=0,base=1,ans=0,rem;
    while(n>0){
        rem=n%10;
        decNum=decNum+rem*base;
        n=n/10;
        base=base*2;
    }
    cout<<"Decimal equivalent: "<<decNum<<endl;
    return 0;
}