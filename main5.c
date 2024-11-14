#include "stdio.h"

int main(void){
 // 배열
 int subway_array[3];
  subway_array[0]=30;
  subway_array[1]=40;
  subway_array[2]=50;

  for(int i=0; i<3; i++){
    printf("지하철 %d호차에 %d명이 타고 있씁니다.\n", i+1, subway_array[i]);
  }

  // 값 설정
  // 배열 크기는 항상 상수로 선언
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++){
    printf("%d\n", arr[i]);
  }

  float arr_f[5] = {1.0f, 2.0f};
  for(int i=0; i<5; i++){
    printf("%.2f\n", arr_f[i]);
  }

  // 문자 vs 문자열
  char c = 'A';
  printf("%c\n",c);

  // 문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'이 포함되어야 함
  char str[] = "coding";
  printf("%s\n", str);

  
  return 0;
}