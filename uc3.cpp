
#include<bits/stdc++.h>
using namespace std;
int main(){
int head = 0;
int tail = 1;
int hh=0,ht=0,tt=0,th=0;
int input;
cin>>input;
for(int i=0;i<input;i++){
cout<<i<<endl;
int random_number1=rand()%2;
int random_number2=rand()%2;
if(random_number1==0&&random_number2==0){
hh++;}
else if(random_number1==0&&random_number2==1){
ht++;}
else if(random_number1==1&&random_number2==0){
th++;}
else{
tt++;}
}
cout<<"HEAD HEAD PERCENTAGE: "<<(float)hh/input*100<<endl;
cout<<"HEAD TAIL PERCENTAGE: "<<(float)ht/input*100<<endl;
cout<<"TAIL HEAD PERCENTAGE: "<<(float)th/input*100<<endl;
cout<<"TAIL TAIL PERCENTAGE: "<<(float)tt/input*100;
return 0;}
