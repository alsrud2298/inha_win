﻿/**************************************************************
 * 함수에서 값을 리턴하는 것을 보여주는 간단한 프로그램       *
 **************************************************************/
#include <iostream>
using namespace std;

// 함수 선언
bool isEven(int y); 

int main()
{
  // 함수 호출
  cout << boolalpha << isEven(5) << endl;
  cout << boolalpha << isEven(10);
  return 0;
}
/**************************************************************
 * isEven 함수는 매개변수로 y를 가지며                        *
 * y를 2로 나눈 나머지를 확인해서 짝수인지 리턴               *
 * 단순한 리터럴 값을 리턴하는 형태                           *
 **************************************************************/
bool isEven(int y)
{
  return ((y % 2) == 0);
} 