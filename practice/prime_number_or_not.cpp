#include<iostream>
int main(){
int n;
std::cout<<"enter the number"<<std::endl;
std::cin>>n;
int i=2;
while(i<n){
if(n%i!=0){
std::cout<<"it is a prime number"<<std::endl;
}
i+=1;

}


}