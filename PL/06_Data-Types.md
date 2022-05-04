### 6. Data Types

#### 1. Primitive Daa Types
    1. 다른 데이터타입으로 표현할 수 없는 것을 말함
      - 모든 언어들은 각각 Primitive dyta type이 존재함
      - 주로 이 4가지를 가짐 int / float / char / boolean
    2. Numberic Types
      - integer
      - floating-point
      - Complex
        Potran, Python: Complex(복소수)를 가짐
      - Decimal 
        COBOL: BCD(Binary Coded Decimal)
          - 사용목적: 입출력이 많아 빠르게 쓰기 위함
          - 장점: 속도가 빠름
          - 단점: 4bit사용으로 메모리 공간 많이 차지함
    3. boolean
      - 대표적인 예
        - 아스키코드
        - 유니코드: 타자기 자판으로 8bit면 충분하나, 다른언어들도 필요할 수 있기 때문에 16bit사용됨
      - 참고
        타자기: 최초의 입출력장치
#### 2. Char String Types
    1. Design Issues
      - 문자열 유형에 특유한 두 가지 가장 중요한 설계 문제
        - 문자열은 원시 유형의 특별한 종류의 문자 배열이여야 함
        - 문자열의 길이가 정적 또는 동적이여야 함
    2. Strings and Their Operations
      - common string operations
        - assignment, catenation, substring reference, comparison, patternmatching(lexical analyzer)
    3. regular expressions
      - 문자열 표현방법이며, unix가 최초로 사용
    4. String Length Options
      - static length string
        - char string size가 한정된 문자열
      - limited dynamic length strings
        - char string size에 maximum이 존재하고, 그것보다 커질 순 없지만 작은 것은 넣을 수 있음
      - dynamic length string
        - char string size가 제한 없는 문자열 (빈거ok, 짧은거ok)
        - 발생할 수 있는 문제: 컴파일러가 string을 위한 변수를 얼마나 잡을지? =>런타임에 잡아줄 수 밖에 없음
        - 진짜 문제: 큰 걸 assign할 떼 빈 공간이 없으면 안된다.
          해결책 3가지: linked-list / Array of pointer / 큰 공간으로 이동
        
#### 3. Enumeration Types
    1.열거형: 변수가 가질 수 있는 값을 한정시킴(Sebset Type 만듦(ex- 변수는 0~100까지값만 가질 수 있게한정시킴))
        =>관리입장 편함 
      - 장점: reqebility / reliability

#### 4. Array Types, Associative Arrays, Record Types, Tuple Types
    1. array
        - 자료종류: homogeneous
        - 접근: intex
    2. record
        - 자료종류: heterogeneous
        - 접근: field
          - 2가지의 방법
            - fully qualified reference(전부 적어주는 것)
            - elliptical reference(생략 기준이 있어 식별 가능하면 생략가능)
          - 어떻게 접근할까?
            - COBOL: OF를 사용해 접근
            - 대부분의 언어: .을 사용해 접근 
        - POTRAN: 90년대 이후 record 기능 생김
        - C: record를 struct라고 칭함
        
    3. tuple과 associative array
        - tuple: heterogeneous, input
        - associative array: homogeneus, field
    4. Subscript Bindings and Array Categories
        - a static array(정적 배열)
          - 첨자 범위 정적 바인딩 + 스토리지 할당 정적인 배열
          - 수행: 실행시간 전 수행됨
          - 장점: 효율성 좋음, 동적할당, 할당해제 필요 없음
          - 단점: 사이즈 고정
        - a fixed stack-dynamic array (고정 스택-동적 배열)
          - 첨자 범위 정적 바인딩 + 스토리지 할당은 동적인 배열
          - 수행: 실행 중 선언 정교화 시간에 수행되며 스택에서 할당됨
          - 장점: 공간 효율성,
                  두개의 하위 프로그램이 동시에 활성화 되지 않는 이상 한 하위 프로그램의 대형 배열과 동일한 공간 사용 가능
          - 단점: 필요한 할당 및 할당 해제 시간
        - a fixed heap-dynamic array(고정 힙-동적 배열)
          - 첨자 범위 동적 바인딩 + 스토리지 할당 동적 배열
          - 수행: 바인딩, 스토리지 할당 모두 실행 중 사용자 프로그램이 요청시 수행되며 힙에서 할당됨
          - 장점: 유연성, 배열 크기 문제에 적합
          - 단점: 힙의 할당 시간이 스택의 할당 시간보다 김
        - a heap-dynamic array: 일반적인 배열 자료구조
          - 첨자 범위 동적 바인딩 +스토리지 할당 동적 배열(배열 수명동안 얼마든지 변경 가능)
          - 장점: 유연성
          - 할당과 할당 해제가 오래 걸림, 프로그램 실행 중 여러번 발생 가능
        - 참고
          - c, unix: heap에서 할당- malloc / stack에서 할당- new, delete
    5. Arra operations
      - slice: array의 일부를 떼어내서 작업함
    6. rectangular and jagged arrays
      - potran에서 처음 사용
      - 수학의 matrix를 가져온 것

#### 5. List Types
    1. lisp에서 먼저 나온 개념
    2. tuple과도 일백상통하는 자료구조
    
#### 6. Union Types
    1. 정의
      - 어떤 field가 베타적으로 사용되는 경우(예: 20대이상: char / 20대이하: int)
      - 자유로운 형변환(예: c)
    2. 특징: aliese가 있음
      - 참고: aliese - union type, call-by-reference, 퐁친터 변수 2개같은값

#### 7. Pointer and Reference Types
    1. 포인터 변수의 목적
      - Indirect Addressing
      - 동적 자료(heap-dynamic variables)
    2. 포인터변수의 연산자
      - 포인터연산자 (*)
      - 화살표연산자(->)
    3. 할당: heap영역
      - unix, c : malloc, free
      객체지향: new, delete는 x
    4. pointer변수의 문제점
      - dangling pointer : 포인터를 가리키는 자료는 회수되었는데, 포인터가 남아있는 경우
        - 해결책: 사용자가 delete를 못하게 하기(java)
                : reference counter를 사용해 자료를 가리키는 포인터가 몇개인지 알고 0일 때 지우는 방법
      - garbage(=lost heap dynamic variables) : 공간 사용이 끝났는데 메모리 회수가 안된 경우
          - eager approach: counter == 0이면 바로회수
          - lazy approach: counter == 0이어도 냅뒀다가 나중에 한번에 회수(gabage collection)
          
    5. 아무타입이나 가리킬 수 있음
      - ALGOL과 void
        - proceduce: return type 없음
        - function : 수학의 함수와 같으며 명백한 결과치가 있고 그 결과치의 타입이 정해짐
      - C
        - proceduce: 없음. void가 그 역할을 대신함
    6. Reference Type의 등장
      - 함수호출: call-by-value(r-value 만듦) / call-by-reference(l-value 만듦)
      - 구별법
        - ALGOL: var / 기타언어: ref, &(l-value를 넣고 싶으면 &사용)
        
#### 8. Type Checking & Strong Typing
    1. casting : explicit type conversion (명시적)
        - strong type: java, c#
    2. coercion: implicit type conversion (묵시적)
        - weak type: c, c++

#### 9. Type Equivalence
    1. Type Checking의 논란: 6-70년대, SE측면에서 strong해서 사용자 실수 없게 만들자고 함
    2. 종류
      - Name type equivalence: 이름이 다르면 다른타입이므로, 더 strong type임
      - Struct type equivalence 
      
#### 10. Theory and Data Types
    1. 앞서 말한 바와 같이, 대부분의 언어는 변수타입이 정해지면 그 값을 연산할 수 있는 연산자가 정해짐
