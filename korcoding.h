/*----KOREAN CODING----*/
#ifndef _KOREAN_H_
#define _KOREAN_H_

#pragma once
/*---C++ Header File---*/
#include <iostream>

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
	기본입출력 진수변환(int x = 10)
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
	inline 기본입출력 소수점(int x)
	{
		using namespace std;
		cout.precision(x);
		return ref;
	}
};

class 시스템클래스
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

class 수학클래스
{
public:
	수학클래스()
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

/*
class 문자열클래스 {
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
					break;
				}
				else if (*(tmp + index) == NULL) {
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
// */

기본입출력 입출력;
출력옵션 출력(입출력);
// 문자열클래스 문자열;
시스템클래스 콘솔;
수학클래스 수학;

#endif