//1. Boilerplate code
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Hi PratikSHA";//this line i just added for watching an output.
//     return 0;
// }


// -------------------------------------------------------------------------------------------------------------------

// 2.Data types
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int marks=200;
// long sallary=288823;
// long long pakage=82378782782;
// float average=34.2;
// double killingAverage=34.898823823;

// string name;
// // cin>>name;It will take one word only
// getline(cin,name);
// cout<<name;

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------


// 3.Conditional Statements
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your Age:";
//     cin>>age;
//     if(age>18){
//         cout<<"You can go for vote";
//     }else{
//         cout<<"You are not eligible for voting.";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------


// 4.Nested Conditions
// #include<iostream>
// using namespace std;
// int main(){
// cout<<"Enter your Savings";
// int savings;
// cin>>savings;
// if(savings<200){
//     cout<<"Better next time save more";
// }else if(savings<500){
//     cout<<"I am thinking for going outside.";
// }else if(savings<1000){
//     cout<<"Ajj ki party meri trf se";
// }else{
//     cout<<"Pura shehar tere naam hai aaj.";
// }


//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------

// 5.Swicth Statement

// #include<iostream>
// using namespace std;
// int main(){

// cout<<"Enter the day Number";
// int day;
// cin>>day;
// switch(day){
//     case 1:
//     cout<<"Monday";
//     break;
//     case 2:
//     cout<<"Tuesday";
//     break;
//     case 3:
//     cout<<"Wednesday";
//     break;
//     case 4:
//     cout<<"Thursday";
//     break;
//     case 5:
//     cout<<"Friday";
//     break;
//     case 6:
//     cout<<"Saturday";
//     break;
//     case 7:
//     cout<<"Sunday";
//     break;
//     default:
//     cout<<"there is no new day intoduced yet";
//     break;
// }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------


// 7.Loops

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"Hi Pratiksha\n";
//     }
//     return 0;
// }



// -------------------------------------------------------------------------------------------------------------------


// 6.ARRAYS

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     arr[3]=89;
//     cout<<arr[3];
//     return 0;
// }

// 7.Functions

// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//     cout<<a+b;
// }
// int main(){

// sum(3,5);
//     return 0;
// }



// -------------------------------------------------------------------------------------------------------------------

// 8.Pass by Reference

#include<iostream>
using namespace std;


void update(int &a){
    cout<<a<<endl;
    a=a+2;
    cout<<a<<endl;;
    return;
}
int main(){

    int a;
    cin>>a;
    update(a);
    cout<<a<<endl;

    return 0;
}