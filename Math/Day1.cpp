#include<bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------

void countNumberOfDigits(int n){
int cnt=0;
while(n!=0){
n=n/10;
cnt++;
}
cout<<cnt;
return;
}


//-------------------------------------------------------------------------------------------------------------------------------------------

int reverseNumber(int n){
    int reversedNumber=0;
    while(n!=0){
        int lastDigit=n%10;
        reversedNumber=reversedNumber*10+lastDigit;
        n=n/10;
    }
    cout<<reversedNumber;
    return reversedNumber;
}


//-------------------------------------------------------------------------------------------------------------------------------------------


void isPallindrome(int n){
int reverse=reverseNumber(n);
if(reverse==n){
    cout<<"it is Pallindrome";
}else{
    cout<<"Not a pallindrome";
}
}




//-------------------------------------------------------------------------------------------------------------------------------------------


void checkArmStrongNumber(int n){
    int armNumber=0;
    int og=n;
    while(n!=0){
        int ld=n%10;
        armNumber+=ld*ld*ld;
        n=n/10;
    }
    if(og==armNumber){
        cout<<"it is a armstrong number";
    }
    else{
        cout<<"It is not a armstrong Number";
    }
}



//-------------------------------------------------------------------------------------------------------------------------------------------

void printAllDivisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}




//-------------------------------------------------------------------------------------------------------------------------------------------

void checkPrime(int n){
    int cnt=0;
    for(int i=1;i*i<n;i++){
if(n%i==0){
    cnt++;
    if(i!=n/i){
        cnt++;
    }
}
    }
    if(cnt==2){
cout<<"It is Prime Number";
    }else{
        cout<<"It is not Prime Number";
    }
}




//-------------------------------------------------------------------------------------------------------------------------------------------

void GCD(int n,int n1){
while(n!=0 && n1!=0){
    if(n1>n){
        n1=n1%n;
    }else{
        n=n%n1;
    }
}
if(n1>=0){
    cout<<n;
}else{
    cout<<n1;
}
}





int main(){
int n,n1;
cout<<"Enter the number";
cin>>n>>n1;

countNumberOfDigits(n);
cout<<endl;
reverseNumber(n);
cout<<endl;
isPallindrome(n);
cout<<endl;
checkArmStrongNumber(n);
cout<<endl;
printAllDivisor(n);
cout<<endl;
checkPrime(n);
cout<<endl;
GCD(n,n1);



    return 0;
}