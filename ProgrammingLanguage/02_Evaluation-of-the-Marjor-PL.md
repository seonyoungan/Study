### 2. Evolution of the Major Programming Languages

#### - motivation for its development
    - Genealogy of common high-level programming language
    - POTRAN: 자연 과학, 공학 (연산 목적)
    - COBOL: 비즈니스, 은행 (문서 목적)
    - LISP: AI (인공지능 분야)
    - ALGOL60/68: C의 모체(현대 언어의 시작)
        - PASCAL→ADA83→python, C#
        - C→C++→java
    - SMALL TALK: 객체 지향의 시작
    
#### 1. Potran
    1. Zuse’s Plankalkul
    2. IBM producer: “The IBM Mathematical FORmula TRANslating System: FOTRAN.”
    3. 포트란은 계속 진화중이다. Fotran1→Fotran2→Fotran4,77,90,95,2003, 2008
        
#### 2. Functional Programming: LISP
    1. Two Descendants of Lisp
        - Scheme / Common Lisp

#### 3. The First Step Toward Sophistication: ALGOL60
    1. 현대 언어의 이론적 배경, 방법을 제공한 중요한 언어
    2. ALGOL58도 나오긴 했음..ALGOL58이후 2년뒤 개발된 언어이지만 드라마틱한 변화가 있었음.
    3. ALGOL 60 Overview: 
        - block structure
            - block(문장들의 집합체)를 덩어리로 나눔
            - ALGOL60: begin, end
            - C: { , }
            - Pascal: begin, end
        - call by value, call by reference
        - recursive function
        - stack dynamic: 지역변수를 스택에 넣는 것이 채택됨
        - 
#### 4. Computerizing Business Records: COBOL
    1. 포트란은 비즈니스용으로 부적합→코볼 개발
        - 비즈니스용 언어: 대용량DB, 양식, 폼
    2. ALGOL60과 다른점
        - ALGOL60: 자체는 성공 못함, 많은 언어에 영향 미침
        - COBOL: 자체는 성공함, 다른 언어들에 영향 못 미침

#### 5. The Beginnings of Timeshring: Basic
    1. 인터프리터방식이며, 간단한 언어이다.
        PC가 처음 나왔을 때는 전산실만 사용하였음.
        →7-80년대 일반인들에게 PC가 보급되면서 일반인들이 쉽게 코딩할 수 있는 교육용 언어 역할
    2. 1990년대에 베이직이 확장되며 visual Basic이라는 이름으로 부활함(닷넷의 일부가 되어서...)

#### 6. Everything for Everybody: PL/1
    1. 혼합방식인가봐→ 그래서 실패
    
#### 7. Two Early Dynamic Language:  APL and SNOBOL
    1. Dynamic Language: 데이터 타입 없이 변수 a에 int, char,... 가능
    
#### 8.The Beginning of Data Abstraction: SIMULA67
    1. 객체지향의 효시: 보통 smalltalk라고 하지만, 일부 학자들은 SIMULA67이 효시라고 하기도 한다.

#### 9. Orthogonal Design: ALGOL68
#### 10. Some Early Descendants of the ALGOLs
    - Pascal
        - ALGOL을 충실하게 개선한 언어
        - 초창기: C보다 많이 사용됨
        - Niklaus Wirth 만듦
    - C
        - Unix 설계를 위해 만들어짐
        - 초창기: 유닉스/리눅스, OS 등 시스템 설계였음
        - 성공요인: 유닉스/리눅스가 커지면서 많이 사용됨
        - AT&T Bell Lab회사가 전화교환기에 들어갈 운영체제를 만들기 위해 자체개발함(C, UNIX)
    
#### 11. Programming Based on Logic: Prolog
    1. 주어진 명제를 Fact + Rule로 프로그래밍함 (16장에서 공부)

#### 12. History’s Largest Design Effort: Ada
    1. 미국 부대 DoD가 만듦
        - 임베디드 시스템에 적합한 언어 필요
        - 450개 언어를 DoD에서 관리해야함으로 유지보수 어려움
        - 결과물
            - 부정적 측면: 성공은 못함. 기술이 자꾸 발전하므로..
            - 긍정적 측면: 이론적 진보(쓰레드, 예외처리 등)→ java, c++에 영향을 줌
    2. Ada83→Ada95 개발
        - 떡락이유: DoD는 본인들이 발주한 것은 모두 Ada로 설계하고자 함→현실적 무리→ Ada영향력 감소
    3. Ada95→Ada2005가 출시되며 여러 분야에서 사용됨
   
#### 13. Object-Oriented Programming: SMALL TALK
    1. 객체 지향에 많은 영향을 끼침
#### 14. Combining Imperative and Object Oriented Features: C++
    1. C++: SIMULLA의 영향도 받았지만, SmallTalk의 영향을 크게 받고 발전함

#### 15. An Imperative-Based Object-Oriented Language: JAVA
    1. SMALLER, SIMPLER, SAFER,...
    2. 배경
        - 새 응용이 생겼는데 좋은 언어가 없어 JAVA가 만들어진 것
        - 1990년대 임베디드 시스템을 간단하고, 안정적으로 만들고 싶어 JAVA개발됨 → 그러나 그 용도로 쓰이지 않음
        - 1990년대에 웹이 활성화되면서 JAVA를 많이 사용함
        - 요즘은 일반프로그래밍에서도 사용함
    3. 평가
        - C++에서 복잡한 기능 빼고, 새기능을 추가함
            - JVM만 올리면 자바 바이트코드는 어디서든 돌 수 있음(포타빌리티, 하이브리드 방식)
            - 속도는  C(컴파일러)보다 느림(그치만 JIT 사용함)

#### 16. Scripting Language
    1. 인터프리터방식, 제어문 기능 가짐
        - Unix의 shell프로그램
            - shell: 사용자가 내용을 치면 그에 대한 처리를 해줌
    2. 배경: 웹이 나오고 양방향 인터랙션이 필요해짐→ script language 확장(ex- javascript)
    3.  Origins and Characteristics of JavaScript
        - 기존은 HTML로만 작업(static)→양방향 인터랙션의 필요성을 느낌
        - js의 첫버전: mocca
            - 넷스케이프가 만들었으나 MS에서 웹브라우저 끼워팔면서 소송함→ 썬마이크로즈가 인수하고 Javascript로 이름 바꿈
        - 이외에도 ruby 등의 scripting language가 있음
        
#### 17. The Flagship .NET LANGUAGE: C#
    1. MS가 2000년도에 들어서서 닷넷 개발환경에서 플래그십 언어를 알림
        - 2000년대의 소프트웨어공학 화두: 어떻게 SW를 빠르고 쉽게 구성할 수 있을까?
            - 호환성 등 고려 필요
            - C#: JAVA, C++바탕으로 만들어진 닷넷의 플래그십 언어
    2. Tubo Pascal(Pascal언어 중 널리 퍼진 언어) → Delphi(Tubo Pascal개선시킨 언어)→이 언어설계자가 C# 설계 (Ander Hejlsberg)

#### 18. Markup-Programming Hybrid Languages
    1. jsp
        - java+html: 웹프로그래밍에 특화된 언어, dynamic Web Documents
