#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;

int main(){
  for(int row = 1;row < 8;row++){
    for(int col = 0;col < 4 - abs(4-row);col++){
      cout<<"#";
    }
      cout<<"\n";
  }
}
