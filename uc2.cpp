#include<bits/stdc++.h>
using namespace std;
int main(){
int head=0;
int tail=1;
int head_count=0;
int tail_count=0;
int input;
cin>>input;
for(int i=0;i<input;i++){
int random_number =rand()%2;
if(random_number==head){
head_count++;}
else{
tail_count++;}
}
cout<<"HEAD PERCENTAGE: "<<(float)head_count/input*100<<endl;
cout<<"TAIL PERCENTAGE: "<<(float)tail_count/input*100<<endl;
return 0;}
