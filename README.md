### Example 1: "안녕 세상!"

```cpp
#include "korcoding.h"

정수형을_반환하는 진입점(공백)
{
	입출력.출력("ㅎㅇ 월드!").새행();
	반환 0;
}
```

<br/>

### Example 2: "만약? 아니면!"

```cpp
#include "korcoding.h"

정수를_반환하는 진입점()
{
	정수형인 김철수의_점수;
	입출력.출력("철수의 점수를 입력하세요 : ").입력(김철수의_점수);

	만약에(김철수의_점수 > 100 또는 김철수의_점수 < 0)
	{
		입출력.출력("잘못된 점수가 입력됐습니다.").새행();
	}
	혹은(김철수의_점수 > 90)
	{
		입출력.출력("역시나 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 90 그리고 김철수의_점수 > 80)
	{
		입출력.출력("그래도 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 80 그리고 김철수의_점수 > 70)
	{
		입출력.출력("아직도 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 70 그리고 김철수의_점수 > 60)
	{
		입출력.출력("아직까진... 철수는 똑똑합니다.").새행();
	}
	아니면
	{
		입출력.출력("철수는 똑똑합니까?").새행();
	}
	반환 0;
}
```

<br/>

### Example 3: "함수"

```cpp
#include "korcoding.h"

진실혹은거짓 맞춰봐_내_몸무게(정수인 인자)
{
	만약(인자 == 70)
	{
		반환 진실;
	}
	아니면
	{
		반환 거짓;
	}
}

정수형을_반환하는 진입점(공백)
{
	정수형인 몸무게 = 0;
	입출력.출력("나 몸무게 몇이게? ").입력(몸무게);

	진실혹은거짓 답 = 맞춰봐_내_몸무게(몸무게);
	만약(답 == 진실)
	{
		입출력.출력("오....").새행();
	}
	아니면
	{
		입출력.출력("틀렸데요!").새행();
	}
	반환 0;
}
```

<br/>

### Example 4: "포인터와 참조"

```cpp
#include "korcoding.h"

정수를_반환하는 진입점()
{
	정수 내정수 = 7;
	정수 포인터 내정수_참조;

	내정수_참조 = 참조 내정수;
	입출력.출력("내 정수 참조의 값은 : ").출력(포인터 내정수_참조).새행();

	증가 포인터 내정수_참조;
	입출력.출력("내 정수의 값은 : ").출력(내정수).새행();

	반환 0;
}
```

<br/>

### Example 5: "클래스"

```cpp
#include "korcoding.h"

객체인 사람{
숨김:
	정수형인 나이;
	정수형인 키;
공개:
	사람(정수형인 나이, 정수형인 키) : 나이(나이), 키(키) {}

	정수를_반환하는 나이_보기()
	{
		반환 나의->나이;
	}
	정수를_반환하는 키_보기()
	{
		반환 나의->키;
	}
	반환하지않는 나이_설정(정수형인 나이)
	{
		나의->나이 = 나이;
	}
	반환하지않는 키_설정(정수형인 키)
	{
		나의->키 = 키;
	}
};

정수를_반환하는 진입점()
{
	사람 배진오(25, 177);
	입출력.출력("배진오 님의 나이는 : ").출력(배진오.나이_보기()).새행();
	입출력.출력("배진오 님의 키는 : ").출력(배진오.키_보기()).새행();
	반환 0;
}
```

<br>

### Example 6: "문자열 자르기"

```cpp
#include "korcoding.h"

정수형을_반환하는 진입점(공백)
{
	문자형인 내_정보[] = "배진오,대학생,블로거";
	문자형인 이중포인터 잘라진_내_정보 = 문자열.자르기(내_정보, ',');

	입출력.출력(잘라진_내_정보[0]).새행();
	입출력.출력(잘라진_내_정보[1]).새행();
	입출력.출력(잘라진_내_정보[2]).새행();

	반환 0;
}
```
