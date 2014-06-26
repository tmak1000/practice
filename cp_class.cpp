#include<iostream>
using std::cin;
using std::cout;

int main(){
  class sample {
  public:
    sample();
    sample(int num);
    int doesSomething(double param);
  private:
    int intData;
  };

  sample object1;
  sample object2(15);

}
