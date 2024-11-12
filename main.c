#include <stdio.h>

// main2.c파일의 int main(void) 함수 실행 위해 main에서 main_1로 변경 
int main_1(void) {
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

  // 변수 : 변하는 수 
  // 정수형 변수에 대한 예제
  int age = 12;
  printf("%d\n", age);
  age = 13;
  printf("%d\n", age);

  // 실수형 변수에 대한 예제 
  float f = 46.5;
  printf("%.2f\n", f);  // 소수점 둘째자리까지만 표시_46.50
  double d = 4.428;
  printf("%.3lf\n", d);  // 소수점 셋째자리까지만 표시_4.428
  
  // 상수 : 변하지 않는 수 -> const 붙임 
  const int YEAR = 2000;
  printf("태어난 년도 : %d\n", YEAR);
  // YEAR = 2001;  // 오류 발생 

  // printf
  // 연산 
  int add = 3 + 7;
  printf("3 + 7 = %d\n", add);
  printf("%d + %d = %d\n", 3, 7, 3+7);

  // scanf : 키보드 입력 받아서 저장
  /*int input;
  printf("값을 입력하세요 : ");
  scanf("%d", &input);
  printf("입력값 : %d\n", input);

  int one, two, three;
  printf("3개의 정수를 입력하세요 : ");
  scanf("%d %d %d", &one, &two, &three);
  printf("값 : %d\n", one);
  printf("값 : %d\n", two);
  printf("값 : %d\n", three); */

  // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
  char ch = 'A';
  printf("%c\n", ch);

  /*char str[256];
  scanf("%s", str);
  printf("%s\n", str);*/

  // 프로젝트 
  // 경찰관이 범죄자의 정보를 입수 (조서 작성)
  // 이름? 나이? 몸무게? 키? 범죄명?
  char name[256];
  printf("이름이 뭐에요? ");
  scanf("%s", name);

  int realAge;
  printf("몇 살이에요? ");
  scanf("%d", &realAge);

  float weight;
  printf("몸무게는 몇 kg이에요? ");
  scanf("%f", &weight);

  double height;
  printf("키는 몇 cm이에요? ");
  scanf("%lf", &height);

  char what[256];
  printf("무슨 범죄를 저질렀어요? ");
  scanf("%s", what);

  // 조서 내용 출력
  printf("\n\n--- 범죄자 정보---\n\n");
  printf("이름 : %s\n", name);
  printf("나이 : %d\n", realAge);
  printf("몸무게 : %.2f\n", weight);
  printf("키 : %.2lf\n", height);
  printf("범죄 : %s\n", what);
  return 0;
}
