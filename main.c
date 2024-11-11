#include <stdio.h>

int main(void) {
  // 기본 출력
  printf("Hello World\n");

  // %d, %f, %c, %s
  // 숫자 출력 
  int a=5, b=10;
  printf("%d %d\n", a,b);
  
  // 문자 출력
  char c='a';
  printf("%c\n", c);

  // 문자열 출력
  printf("%s\n", "Hello!");

  // 연산자 : +, -, *, /, %
  // 이중연산자 : +=, -=, *=, /=, %=
  // 증감연산자 : ++, --
  // 관계 연산자 : ==, !=, <, >, <=, >=
  // 논리 연산자 : &&, ||, !
  int true=1, false=0;
  printf("%d %d %d\n", true&&false, true||false, !true);

  // 조건 : if, else if, else
  if(a<b){
    printf("%s", "a가 b보다 작다.\n");
  } else if(a>b){
    printf("a가 b보다 크다.\n");
  }else{
    printf("둘다 아니다.\n");
  }

  // 반복문 : while, do while, for 
  
  return 0;
}
