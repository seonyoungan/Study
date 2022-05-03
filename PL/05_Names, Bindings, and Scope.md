### 5. Names, Bindings, and Scope

#### 1.Introduction
    1. PC: CPU + MEMORY
    2. Chapter 1장의 von-Neumann Architecture 참고
      - Fotran, COBOL, ALGOL은 폰노이만 구조에 영향을 받음

#### 2. Names
    1. identifier: 프로그래머가 붙인 이름, 예-함수명, 변수명
    2. 변수명 규칙
      - 대소문자 구분
      - keyword 사용 불가

#### 3. Variables
    1. A program variable is an abstraction of a computer memory cell or collection of cells.
      - 변수는 값을 집어 넣는 것, 그 이상의 의미가 존재함
    2. 변수의 속성 6가지
      - Name / Address / Value / Type / Lifetime / Scope
    3. Name
    4. Address
      - aliases
        - 예) 포인터 변수
      - aliases발생의 3가지 이유
        - Union Type
          하나의 자료구조를 서로 다른 이름, 자료구조로 선언해 하나의 메모리 영역을 서로 다른 이름으로 접근
        - p=*q;
          q의 l-value(주소값)을 p의 l-value에 넣어 같은 메모리를 가리킴
        - 함수의 Actual Parameter, Formal Parameter
          call-by-reference일때, aliase 발생
    5. Value
    6. Type

#### 4. The Concept of Binding
    1. 용어
      - binding : entity ↔ attribute
        - entitiy: 속성이 결합되는 것(sum = a+b)
      - binding Time: 속성이 결합되는 시점
        - compile binding: 런타임에는 변수타입이 바뀌지 않음
        - runtime binding: 실행시 값이 계속 바뀔 수 있을 때 값에 대한 바인딩
      - example
        - 세살 버릇 여든까지 간다
          - entity: 세살 아이 / attribute: 버릇 / binding: 여든까지 간다.
          - 여기서 의미는 버릇이 바뀌기 어렵다는 것 = 특징, 즉, static하다는 의미가 됨
    
    2. Binding 방식
      - Static Binding
        - 변수 타입이 실행 내내 안바뀜
        - 컴파일 타임 정해짐(실행 직전) → 실행했는데 값이 안바뀜 = static
        - 90년대 중반까지 많이 사용됐음(lisp(dynamic binding)제외)
        - 장점: Type Checking가능, reliability 확보
      - Dynamic Binding
        - 변수 타입이 실행 내내 바뀔 수 있음
        - 실행시 값이 정해짐 → 실행 중간(runtime)에 값이 바뀔 수 있음
        - 장점: 사용자가 쓰기 쉬움 / 단점: Type Checking불가능, less relative
        - 90년대 이후(웹언어 발달) 많이 사용됨(Ruby, Python ...)
        - JAVA: primitive type 모두 object(reference type)로 구성
          이때, object는 동적할당.
          동적할당시 문제점
          1) 포인터가 사라짐, 자료 남음(Garbage Problem)
          2) 포인터만 남았음, 자료 사라짐(Dangling Pointer)-더 위험
             why? 엉뚱한 곳을 가리켜서 틀린 값을 가져올 수 있음
                  이를 대비하기 위해 Java는 Delete가 없음→Garbage 엄청 남음→JVM의 Garbage Collection이 회수함
      - Interpreter 방식
      
    3. Storahge Binding and Lifetime
      1. Static variables (Static Type binding)
        - global variables
        - 메모리에 고정적 할당이 끝날 때 까지 그 자리를 가짐(프로그램 어디에서나 접근 가능함)
        - 지역변수이면서 history sensitive(↔memory less)가 필요함
        - Static으로 선언시 지역변수이지만, 메모리셀을 차지함
        - 단, java의 static과는 다름(class하나에만 있는 변수일 때: static / 그렇지 않을 때: instance)
        - 메모리 할당영역: data area
        
      2. Stack dynamic variables(Dynamic Type binding)
        - Local variables
        - 함수가 activity되는 동안할당됨
        - 할당영역: stack area
        
      3. Explicit heap-dynamic variables(Dynamic Type binding)
        - 동적 자료구조(unix-malloc, oop-new)
        - 할당영역: heap area
        
      4. Implicit heap-dynamic variables(Dynamic Type binding)
        - dynamic type binding쓰는 언어에서 필요(즉, 변수에 어떤 값을 집어 넣을 때 그 값이 들어갈 공간을 동적으로 만듦)
        - 할당영역: heap area

    4. 함수의 목적
      - reuse / abstraction / information hiding
      - 지역변수: 다른 함수에 접근X / 전역변수: 다른함수에 접근O

#### 5. Scope
    1. Static scope
      - 프로그램 구조상 결정(컴파일러가 변수들의 구조를 알 수 있음)
      - ALGOL60에서 처음 사용, 그 이후로 다 사용함
      - 일반적으로 C계열에서 Global, Local variables사용
      - nested(함수내함수사용)
        - 허용O: ALGOL
        - 허용X: C, C++, JAVA
          - 허용 안하는 데 nested되면, global, local외 non-local scope(제3의 영역)발생
            참고로python은 non-local을 명시하기 때문에 reliability 좋음
    2. Blocks
      - ALGOL: Begin, end / local scope 개념
      - C: (, )
    3. Declaration Order
      - 전역변수와 지역변수 선언
        - ALGOL: 함수시작부분에 선언 / C: 자유롭게 선언
    4. Global Scope
      - 전역변수가 많이 쓰이면 모듈간의 결합도 확장되고 모듈간 카풀링 발생, 유지보수 문제 발생
    5. Evaluation of Static Scoping
    6. Dynamic Scope
    7. Evaluation of Dynamic Scoping
      - 자기 외에 어떤 변수 사용할지 구조상 점검하지 않음 → 컴파일러가 error 체크 안 함
      
#### 6. Scope and Lifetime
    1. Scope와 Lifetime의 연관
      - 일반적: 전역변수-Scope, Lifetime 전역 / 지역변수-Scope, Lifetime 지역
     
#### 7. Referencing Environments
    1. referenceing environment: 함수 실행시 접근할 수 있는 집합체
    2. scope 구분
      - activite     : 함수 실행이 계속되고 있다
      - static scope : 어떤 순서로 active 됐는지에 따라 scope가 달라지지 않음
      - dynamic scope: 어떤 순서로 active 됐는지에 따라 scope가 달라짐
      
#### 8. Named Constants
    1. constant(상수) 사용 이유
      - readability, reliabliry를 길러줌
    2. Modifier
      - Variable, Method, Class 앞에 붙어 속성 정의해주는 것
      - java의 경우: final
        final이 class에 붙으면 더이상 상속(inheritance) 불가
        final이 method에 붙으면 더이상 overidden 불가
      - C#의 경우: const, read only 2가지 사용
        instance만들어질 때 값이 적용될 수 있기 때문에, 인스턴스마다 다른값을 가질 수 있음
        하지만 한번 값을 정하면 그 인스턴스 안에서는 바뀔수 없는 것임
