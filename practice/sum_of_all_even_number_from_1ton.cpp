#include<iostream>
int main(){
int n;
std::cout<<"enter the number" << std::endl;
std::cin>>n;
int i=2;
int sum=0;
while(i<=n){
std::cout<<i;
sum=sum+i;
i+=2;
}
std::cout<<"  "<<sum<<std::endl;
}