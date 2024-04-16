#include<iostream>
using namespace std;
int main(){
int a=0;
int b=1;
int sum;
std::cout<<a<<" "<<b<<endl;
for(int i=1;i<=10;i++){
sum=a+b;
std::cout<<sum<<endl;
a=b;
b=sum;



}

}