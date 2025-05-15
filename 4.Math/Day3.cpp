#include<iostream>
using namespace std;
int main(){

// Printing count of prime between the range l to right
// cout<<"Enter the left and right rnge";
// int l,r;
// cin>>l>>r;
// int prime[r+1];
// for(int i=2;i<=r;i++){
//     prime[i]=1;
// }
// for(int i=2;i*i<=r;i++){
//         if(prime[i]==1){
//             for(int j=i*i;j<=r;j+=i){
// prime[j]=0;
//             }
//         }
//     }
//     int cnt=0;
//     for(int i=2;i<=r;i++){
        
// prime[i]+=cnt;
// cnt=prime[i];

//     }


//     cout<<prime[r]-prime[l-1];






// spf
int n;
cin>>n;
int spf[n+1];

for(int i=2;i<=n;i++){
    spf[i]=i;
}
for(int i=2;i*i<=n;i++){
    if(spf[i]==i){
        for(int j=i*i;j<=n;j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
        }
    }
}

    while(n%spf[n]==0){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }

    return 0;
}