#include <stdio.h>
int main(void){
  // ++
  int a = 10;
  printf("a는 %d\n", a);
  a++;
  printf("a는 %d\n", a);

  int b = 20;
  printf("b는 %d\n", ++b);
  printf("b는 %d\n", b++);
  printf("b는 %d\n", b);

  // 반복문 : for, while, do while
  // for(선언; 조건; 증감) {}
  for(int i=1; i<=10; i++){
    printf("Hello World %d\n", i);
  }
  // while(조건) {}
  int x = 1;
  while(x<=10){
    printf("Hello World %d\n", x++);
    //x++;일 경우에는 printf의 x++ -> x
  }
  // do{} while(조건);
  int z = 1;
  do{
    printf("Hello World %d\n", z++);
  } while(z<=10);

  // 2중 반복문
  for(int j=1; j<=3; j++){
    printf("첫 번째 반복문 : %d\n", j);
    for(int k=1; k<=5; k++){
      printf("   두 번째 반복문 : %d\n", k);
    }
  }

  // 피라미드를 쌓아라 - 프로젝트
  int floor;
  printf("몇 층으로 쌓겠느냐? ");
  scanf("%d", &floor);
  for(int c=0; c<floor; c++){
    for(int d=c; d<floor-1; d++){
      printf(" ");
    }
    for(int e=0; e<c*2+1; e++){
      printf("*");
    }
    printf("\n");
  }
  
}