### 7. Expressions and Assignment Statements

#### 1. Arithmetic Expression
    1. operators
      - unary  : one operands 
      - binary : two operands 
      - ternary: three operands 
    2. binary operators 
      - prefix / infix / postfix
    3. rules of math
      - precedence
      - associtivate (left, right)
      - parenthese(괄호가 제일 우선)
    4. side effect of function
      - 프로그래밍에서 각 함수는 기능과 요구가 있는데,
        자기 변수의 변수 값을 바꾸면 부작용(side effect) 발생
        - one of its parameters(call-by-reference로 파라미터 값 고침)
        - global variable(전역 변수 로 모델간 카풀링 발생)
    5. 수학과 pure functional language의 차이
      - 수학: 변수개념 없음 / call-by-reference개념 없음
      - pure functional language: 위의 2개 개념이 없으면 실질적으로 한계 있음
    6. ruby expression
      - 특징: smalltalk처럼 pure oop이다.
      - 장점: 개념적으로 좋음
      - 단점: 실용성이 떨어짐(속도 느림)

#### 2. Overladed Operator
    1. overloding: 한가지 기호가 여러 의미로 사용됨
      - +가 int, char에도 사용됨 / 주소 만들기 / 합치기
      - overload opertor / overload function: 방지하려면 함수명을 다르게 호출해야 함
      
    2. 형변환: 변수타입을 실행시 바꿈
      - narrowing conversion / widening conversion
      - 문제점: narrowing conversion(큰타입 => 작은타입) 뒷 문장이 잘릴 수 있어 위험
                즉, widening conversion(작은타입 => 큰타입) 변경은 문제 없음
      - 해결법: 가능한 명시적으로 형변환 할 것
      
#### 3. Short-Circuit Evaluation
    1. Short-Circuit: 전기용어
      - 특징: 앞에서 답이 결정되면 뒷부분의 계산은 하지 않는 것
      - 장점: 속도 빠름
      - C: 배정문을 하나의 식으로 보고 오류를 낼 수 있어 권장 안함
      - java: Short- Circuit를 사용하지 않음
      
#### 4. Assignment Statements
    1. Simple Assignment
      - 가장 기본적인 식은 배정문
      - 변수의 값을 runtime에 바꿈
      - ALGOL에서는 := 노테이션 사용
        POTRAN, C는 :제외한 = 노테이션 사용
    2. Conditional Targets: if문을 축약해서 사용(삼항연산자)
    3. Compound Assignment Operators: +=
    4. Unary Assignment Operators: ++
    5. Assignment as an Expression
      - C: assignment의 결과값을 조건문으로 사용할 수 있음
        - 예) 0: 거짓 / 1: 참
    6. Multiple Assignments
      - 튜플형태의 자료구조
      - 장점: 식이 짧아짐, 가독성 좋음
        
#### 8. Mixed-Mode Assignment
    1. 예를 들어 a = b+c일 때, a는 int이고 b+c는 float인 경우
       왼쪽의 타입에 맞추는 것이 상식적으로 맞다.
      
