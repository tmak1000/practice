#include<iostream>
#include<cstdlib>
using std::cout;
using std::cin;

int main(){
    for(int row = 0;row<4;row++){
      if(row > 0) { 
	for(int space=0;space < row;space++){
	  cout<<" ";
	}
      }
      for(int i=0;i<2;i++){
      for(int col = 0;col<4-row;col++){
      
      cout<<"#";
      }
      }
      cout<<"\n";
    }

  }
    
