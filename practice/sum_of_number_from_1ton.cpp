#include<iostream>
int main(){
int n;
std::cout<<"enter the number" << std::endl;
std::cin>>n;
int i=1;
int sum=0;
while(i<=n){
std::cout<<i;
sum=sum+i;
i+=1;
}
std::cout<<"  "<<sum<<std::endl;
}