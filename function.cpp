#include<iostream>
using namespace std;
//definition
void printHello(){
    cout<<"Hello World"<<endl;
}
//function with parameters and return type
int sum(int a, int b){
    return a+b;
}
int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int sumN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
     sum=sum+i;
    }
    return sum;
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int factN=factorial(n);
    int factR=factorial(r);
    int factNR=factorial(n-r);
    return factN/(factR*factNR);
}
bool isPrime(int n){
    if(n<=1)
        return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
void printPrimes(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
        
int main(){
    //calling
    printHello();
    //3 and 5 are arguments
    int result = sum(5, 3);
    cout << "Sum: " << result << endl;
    //min of two
    int minimum = min(10, 20);
    cout << "Minimum: " << minimum << endl;
    //sum of first n natural numbers
    int total = sumN(5);
    cout << "Total: " << total << endl;
    //factorial of a number
    int fact = factorial(5);
    cout << "Factorial: " << fact << endl;
    //sum of digits of a number
    int digitSum = sumOfDigits(123);
    cout << "Sum of Digits: " << digitSum << endl;
    //combination nCr
    int n=8,r=2;
    int combination = nCr(n,r);
    cout << "Combination (nCr): " << combination << endl;
    //prime check
    bool primeCheck = isPrime(7);
    cout << "Is Prime: " << (primeCheck ? "Yes" : "No") << endl;
    //print prime numbers from 1 to n
    cout << "Prime numbers from 1 to " << n << ": ";
    printPrimes(n);
    return 0;
}