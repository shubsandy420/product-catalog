#include <iostream>

int main(){
  char ch;
  std::cout<<"enter the value of ch"<<std::endl;
  std::cin>>ch;
if(ch>='a'&& ch<='z')
{
  std::cout<<"this is lower case"<<std::endl;
}
  else if(ch>='A'&& ch<='Z')
  {
    std::cout<<"this is upper case"<<std::endl;
  }
  else if (ch>=0 && ch<=9)
  {
    std::cout<<"this is numeric"<<std::endl;
  }
  return 0;
}   