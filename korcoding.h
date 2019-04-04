/*----KOREAN CODING----*/
#ifndef _KOREAN_H_
#define _KOREAN_H_

#pragma once
/*---C++ Header File---*/
#include <iostream>
#include <iomani>

/*---C Header File---*/
#include <stdlib.h>
#include <time.h>

#define 진입점 main

#define 만약 if
#define 혹은 else if
#define 아니면 else
#define 반복 for
#define 반환 return

#define 형식정의 typedef
#define 구조체 struct

#define 클래스 class
#define 공개 public
#define 숨김 private
#define 보호 protected

#define 동적 new
#define 삭제 delete
#define 정적 static
#define 상수 const

#define 참 true
#define 거짓 false

typedef int 정수;
typedef float 실수;
typedef char 문자;
typedef void 공백;

class 기본입출력
{
public:
	template <typename type>
	기본입출력 출력(type a)
	{
		std::cout << a;
		return *this;
	}
	기본입출력 새행()
	{
		std::cout << std::endl;
		return *this;
	}
	template <typename type>
	void 입력(type &a)
	{
		std::cin >> a;
	}
};

class 출력옵션
{
private:
	기본입출력 &ref;
public:
	출력옵션(기본입출력 &r) : ref(r) {};
	기본입출력 진수변환(int x)
	{
		using namespace std;
		switch (x)
		{
		default:
			cout << dec;
			break;
		case 16:
			cout << hex;
			break;
		case 8:
			cout << oct;
			break;
		}
		return ref;
	}
	inline 기본입출력 자릿수(int x)
	{
		using namespace std;
		cout.precision(x);
		return ref;
	}
};

class 편의시스템
{
public:
	inline void 정지()
	{
		system("pause");
	}
	inline void 정리()
	{
		system("cls");
	}
	inline void 입력(char a[])
	{
		system(a);
	}
};

class 수학기능
{
public:
	수학기능()
	{
		srand(time(NULL));
	}
	int 랜덤범위(int a, int b)
	{
		int x = rand() % b - a;
		return x;
	}
	int 랜덤값()
	{
		int x = rand();
		return x;
	}
	template <typename type>
	inline type 제곱(type a, int b)
	{
		type temp = 1;
		for (int i = 0; i < b; i++) temp *= a;
		return temp;
	}
};

기본입출력 입출력;
출력옵션 옵션(입출력);
편의시스템 콘솔;
수학기능 수학;

#endif