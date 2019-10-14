#pragma once
/*----KOREAN CODING----*/
#ifndef _KOREAN_H_
#define _KOREAN_H_

#pragma warning(disable:4244)
#pragma once

/*---C++ Header File---*/
#include <iostream>

/*---C Header File---*/
#include <stdlib.h>
#include <time.h>

#define 진입점 main

#define 또는 ||
#define 그리고 &&

#define 증가 ++
#define 감소 --

#define 삼중포인터 ***
#define 이중포인터 **
#define 포인터 *
#define 참조 &

#define 만약 if
#define 만약에 if
#define 혹은 else if
#define 아니면 else
#define 반복 for
#define 반환 return

#define 정의 typedef
#define 구조 struct

#define 나의 this
#define 이것의 this

#define 객체 class
#define 객체인 class
#define 클래스 class
#define 클래스인 class
#define 공개 public
#define 숨김 private
#define 보호 protected

#define 상수 const
#define 정적 static
#define 동적 new
#define 삭제 delete

#define 참 true
#define 진실 true
#define 거짓 false

typedef int 정수형을_반환하는;
typedef float 실수형을_반환하는;
typedef char 문자형을_반환하는;

typedef int 정수를_반환하는;
typedef float 실수를_반환하는;
typedef char 문자를_반환하는;
typedef void 반환하지않는;
typedef void 반환없음;

typedef int 정수변수인;
typedef float 실수변수인;
typedef char 문자변수인;

typedef int 정수형인;
typedef float 실수형인;
typedef char 문자형인;
typedef void 비어있는;
typedef void 비어있음;

typedef int 정수인;
typedef float 실수인;
typedef char 문자인;

typedef int 정수변수;
typedef float 실수변수;
typedef char 문자변수;

typedef int 정수;
typedef float 실수;
typedef char 문자;
typedef void 공백;

typedef bool 진실혹은거짓;

typedef int 정수변수인;
typedef float 실수변수인;
typedef char 문자변수인;

typedef int 정수형인;
typedef float 실수형인;
typedef char 문자형인;
typedef void 비어있는;
typedef void 비어있음;

typedef int 정수인;
typedef float 실수인;
typedef char 문자인;

typedef int 정수변수;
typedef float 실수변수;
typedef char 문자변수;

typedef int 정수;
typedef float 실수;
typedef char 문자;
typedef void 공백;

typedef bool 진실혹은거짓;

class JinIO
{
public:
	template <typename type>
	JinIO 출력(type a)
	{
		std::cout << a;
		return *this;
	}
	JinIO 새행()
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

class JinPrint
{
private:
	JinIO &ref;
public:
	JinPrint(JinIO &r) : ref(r) {};
	JinIO 진수변환(int x = 10)
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
	inline JinIO 소수점(int x)
	{
		using namespace std;
		cout.precision(x);
		return ref;
	}
};

class JinSystem
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
	inline void 명령(char a[])
	{
		system(a);
	}
};

class JinMath
{
public:
	JinMath()
	{
		srand(time(NULL));
	}
	int 랜덤값()
	{
		int x = rand();
		return x;
	}
	int 랜덤값(int a)
	{
		int x = rand() % a;
		return x;
	}
	int 랜덤값(int a, int b)
	{
		int x = rand() % b - a;
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

class JinString {
public:
	char** 자르기(char* tmp, char ch)
	{
		int count = 0;
		int ch_count = 0;
		int length = 0;
		int max_length = 0;
		while (1) {
			length++;
			if (*(tmp + count) == ch) {
				ch_count++;
				if (max_length < length) {
					max_length = length;
					length = 0;
				}
			}
			count++;
			if (*(tmp + count) == NULL) {
				break;
			}
		}
		ch_count++;
		int index = 0;
		char **return_array = (char**)malloc(sizeof(char) * ch_count);
		for (int i = 0; i < ch_count; i++) {
			return_array[i] = (char*)malloc(sizeof(char) * max_length);
			for (int j = 0; j < max_length; j++) {
				return_array[i][j] = *(tmp + index);
				index++;
				if (*(tmp + index) == ch) {
					index++;
					for (int k = j + 1; k < max_length; k++) {
						return_array[i][k] = 0;
					}
					break;
				}
				else if (*(tmp + index) == NULL) {
					for (int k = j + 1; k < max_length; k++) {
						return_array[i][k] = 0;
					}
					break;
				}
			}
		}
		return return_array;
	}
};

template <typename T>
int 길이(T *len = nullptr)
{
	int count = 0;
	while (1) {
		if (*(len + count) == NULL) {
			break;
		}
		count++;
	}
	return count;
}

JinIO 입출력;
JinPrint 출력(입출력);
JinString 문자열;
JinSystem 콘솔;
JinMath 수학;

#endif
