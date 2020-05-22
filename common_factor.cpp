#include <iostream>
#include<algorithm>
using namespace std;

int common_factor(int num1,int num2){
    int ans=1 ,loop=0;
    if(num1>num2)
    loop=num1;
    loop=num2;

for(int i=2;i<loop;i++){
    if(((num1%i)==0)&&((num2%i)==0)){

       ans=i;
       return ans;
            }
}
}
int main()
{

    int firstnum,secondnum;
    cout<<"First number::  ";
    cin>>firstnum;
    cout<<"\nSecond Number::  ";
    cin>>secondnum;
    int com=__gcd(firstnum,secondnum);
    cout<<"Form __gcd method=  "<<com<<endl;
    com=common_factor(firstnum,secondnum);
    cout<<"From another method=  "<<com;


    return 0;
}
//describe the whole process

/*
4 2
4/2=
2/2
let first=90%2=0 %3=0 %4!=0 and so on
let second=30/2=15
for(int i=2;i<firstnum;i++){
    if(((firstnum%i)==0)&&((secondnum%i)==0)){

       ans=i;

            }
}


*/

