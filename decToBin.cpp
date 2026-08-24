#include<iostream>
using namespace std;
int main(){
    int decNum,rem,ans=0,base=1;;
    cout<<"Enter a decimal number: ";
    cin>>decNum;
    while(decNum>0){
        rem=decNum%2;
        decNum=decNum/2;
        ans=ans+rem*base;
        base=base*10;
    }
    cout<<"Binary equivalent: "<<ans<<endl;
    return 0;
}