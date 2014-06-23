#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int compareFunc(const void * voidA,const void * voidB) {
  int * intA = (int *)(voidA);
  int * intB = (int *)(voidB);
  return *intA - *intB;
};

int main(){
  const int ARRAY_SIZE = 12;
  int surveyData[ARRAY_SIZE] = {4,7,3,8,9,7,3,9,9,3,3,10};

  for(int a = 0;a < ARRAY_SIZE;a++){cout<<surveyData[a]<<",";}
  cout<<endl;

  qsort(surveyData,ARRAY_SIZE,sizeof(int),compareFunc);
  
  int mostFrequent = 0;
  for(int i = 1;i < MAX_RESPONSE;i++){
    if(histogram[i] > histogram[mostFrequent]) mostFrequent = i;
  }mostFrequent++;
  
  int highestFrequency = 0;
  int currentFrequency = 0;
  for(int i = 0;i < ARRAY_SIZE;i++){
    currentFrequency++;
    // if(surveryData[i] is last occurrence of a value)
    if(i == ARRAY_SIZE - 1 || surveyData[i] != surveyData[i + 1]){
      if(currentFrequency > highestFrequency) {
	highestFrequency = currentFrequency;
	mostFrequent = surveyData[i];
      }
      currentFrequency = 0;
    }
  }
      for(int a = 0;a < ARRAY_SIZE;a++){cout<<surveyData[a]<<",";}
      cout<<endl;
      cout<<"highestFrequency = "<<highestFrequency<<endl;
      cout<<"mostFrequent = "<<mostFrequent<<endl;
}
/*
const int MAX_RESPONSE = 10;
int histogram[MAX_RESPONSE];
for(int i = 0;i < MAX_RESPONSE;i++){
  histogram[i] = 0;
}
for(int i = 0;i < ARRAY_SIZE;i++){
  histogram[surveyData[i] - 1]++;
}
*/
