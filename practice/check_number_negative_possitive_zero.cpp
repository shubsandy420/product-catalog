#include <iostream>
using namespace std;
int main() {
  int a;
  std::cout <<"the valu of a is:" ;
   std::cin  >> a ;
  //std::cout <<"the sum of a and b is:" << a+b<<endl;
  if(a<0)
  {
    std::cout<<"a is negative";
  }
  else if(a>0){
    std::cout<<"a is possitive"<<endl;
  }
  else if(a==0){
    std::cout<<"a is zero"<<endl;
    
  }
  
  
}