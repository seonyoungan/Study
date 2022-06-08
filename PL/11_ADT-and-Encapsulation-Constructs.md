### 11. Abstract Data Types and Encapsulation Constructs

#### 0. Summary01-07

    1. 컴퓨터의 작동 원리
      - 프로그램 실행방법 3가지: compile, Interpreter, hybrid
      
    2. 언어의 역사
      - 진화과정, 언어의 확장 이유(Domain확장, 진화해서 더 좋아짐)
      
    3. 언어의 문법
      - context=freegrammar VS sensitive
      - 언어 문법의 표현: BNF Notation
      
    4. 컴파일러의 전단계
      - lexical analysis: lexeme찾기 (why? 문장 해석을 위함=> token으로 syntax analysis에 넘김)
      - sintax analysis(=parsing):  top-down 방식, bottom-up 방식
      
    5. 데이터 타입
      - 변수, 바인딩, scope, lifetime(static, dynamic)
    
    6. 변수로 할 수 있는 연산 종류
      - 값한정 / primitive type, reference type
    
    7. 배정문과 식
      
#### 1. The Concept of Abstraction
    1. abstraction Data type에 대해.. 
      - ADT <-> detail, concrete, refreesentational
      - process abstraction: function
      - Data abstraction: OOP 또는 OOP의 클래스
      
    2. PL은..
      - weapon against the complexity of programming
        프로그래밍의 복잡성에 대항하는 무기
      
    3. function이란..
      - 목적: 재사용의 단위
      - 문제점: 카풀링(변수를 공유하면 모델간 의존성이 심화됨
      - 해결책: oop의 접근 지정자
    
    4. OOP는...
      - 상속, 확장(추가) 가능
      - 목적: Deuse modefication
    
#### 2. Introducation to Data Abstraction
    1. ADT의 효과
      - 캡슐화
      - 정보은닉
      
     2. method 덩어리: ADT
     3. 상속의 개념: class의 객체 생성이 가능
     4. 정리
      - 전역 / 지역의 개념이 없고 들여다 봐야함
      - 레벨로 구분(접근지정자)
      - 캡슐화(class를 통함)
      
     5. OOP언어가 제공하는 특징
      - ADT
      - Inheaditance
      - Dynamic binding
      - Polymorphism
     
     6. 자바의 생성자와 소멸자
      - Constructor: 자바의 class이름과 동일
      - Destruction: 없음 (Dangling pointer위험 때문에)
                     없어서 가비지값 많이 쌓임 -> 일정시간마다 가비지컬렉션이 수거
                     속도저하의 원인이기도? -> 메모리 크기를 키우면 빨라짐
      - 프로토콜과 함수
        - 프로토콜, 함수의 헤더, 인터페이스 등 비슷한 결?
        - 함수: 호출자-피호출자가 존재함(API 주고받기)
      
#### 3. Design issues for Abstract Data Types
    1. oop언어라면
      - 프로그래머가 클래스를 만드는 기능 제공 해야 함
        
    
    2. ADT의 연산
      - Iterator: 반복자- for(count), while(logical Iteration, 3가지 연산(pre, infix, post)
      - Acessor: 제어자
      - Constructor: 생성자- 클래스와 같은 이름
      - Destroctor: 소멸자- (reclam heap storage) 단, 위에 언급한 바와같이 자바는 소멸자는 없음

#### 4. Language Examples
    1. OOP의 효시: 시뮬라67
    2. C++과 JAVA의 비교
      - C++
        - 접근지정자: private, protected, public
        - 특징
          - .h : 헤더파일 들어있음 vs.cpp: implementation (구현되어있음)
          - :: : scope 연산자
                 global에 sum변수가 있고 함수 내 sum도 있는 상태에서
                 global(함수 밖의) sum변수에 접근하고 싶을 때 사용
          - specification과 implementation을 명시적으로 구분하는 언어
            프로토타입 = 함수의 해더(specification, core interface, implementation)
          
      - JAVA
          - 접근지정자: private protected, default, public
     
    3. ADT in object-C
      - C++과 유사하지만 smallTalk의 노테이션을 다룸
      - 예) @interface
      - object C의 @interface == java의 interface class
      - 평가하자면,, 사람들은 이상행,,C문법 쓰면서 smallTalk노테이션을 사용한다..
      
    4. ADT in java
        - C++에서 시작된 자바
        
        - 특징
          - 모든 인스턴스는 힙에 저장됨
          - 레퍼런스 데이터 타입 존재(기본형외)
          
        - class의 종류
          말하기 앞서, java는 명시적으로 나누지 않는다.
          
          - interface class: 구현 안 된 클래스
          - abstract class: 일부 구현된 클래스
          - class: instance를 만들 수 있는 유일한 클래스(implementation 포함)
          
    5. C++과 Java의 다른점
      - java는 독립된 클래스가 없다.
        (모든 건 다 클래스로 구현 되어야함 / 모든 클래스는 누군가로부터 상속 받아야 함)
      - java는 destructor가 없다. (3번째 말하는 중)
        
#### 5. Parameterize Abstract Data Types
    1. Wild Charactor
      - 패텅매칭때 함(* . 등)
      - 자바의 모든 자료구조의 모양은 wild Charactor이다.
      - collection<?> : Generic of generic
      
#### 6. Encapsulation Constructs
    1. 많은 작업시 관리의 문제이다.
       이건.. naming과 함께.. SE에서 다룰 문제이다.
       
#### 7. Naming Encapsulations
    1. Naming resolution, naming space(scope operator) 문제
    2. Java package
      - 자바는 패키지를 가진다. (타입, 인터페이스)
      - 역할
        - 접근권한자 4개를 가지므로서의 역할
        - 디렉토리로서의 역할
