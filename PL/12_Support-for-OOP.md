### 12. Support-for-OOP

#### 1. Instroduction
    1. 요즘 언어들에 대해
      COBOL, LISP는 OOP언어의 개념과 떨어졌으나, 요즘은 대부분 OOP를 받아들임

#### 2. OOP
    1. OOP의 뿌리: simula 67
    
    2. 제대로된 OOP: smalTalk
      - pure OO: 모든 게 다 객체이고 클래스로부터 생성됨
      - 객체간 작업 필요시: massage passing 방법을 사용
      
    3. OOP의 조건
      - ADT
      - Inheritance
      - Dynamic Binding
      - Polymorpism
      
    4. OOP의 SE측면(생산성 향상 방법을 고안해야 함)
      - Reuse(재사용성)
      - Automation(자동화)
    
    5. Reuse에 대해..
      - 현재로서 재사용의 단위: ADT
      - OOP 개념이 없을 때까지: 함수(단점: 카풀링)
      - 자바에서는 함수와 ADT를 명시적으로 나누진 않는다.
    
    6. Inheritance에 대하여..
      - 개발은 커스터마이징이 필요함 (상속의 목적)
      - 약간 일부 변형하여 씀 = Override
      - 새멤버 변수 추가 : reuse with Modification
      
    7. ADT의 Instance == Object
    
    8. 클래스
      - 부모클래스: 상속 유도함
        - 
      - 자식클래스: 상속 유도됨
        - 상속받은 뒤, 필드, 메소드 추가가 가능
        - 오버라이딩 가능(기존 메소드를 변경하고 수정할 수 있음)
        - 부모의 Private 접근 지정자는 가지고 있으나 접근할 수 없으
    
    9. 클래스 내 함수 : method
      - 그 메소드를 호출한다는 것 == 메세지를 보낸다는 의미
        이 때, 호출시 interface is message protocal(== message interface)
      - 일반 프로그램의 함수 호출과 같은 점과 다른 점
        - 같은 점: 일단 사용자 입장에서는 결과가 같음
        - 다른 점: 각각의 오브젝트가 독립된 공간을 갖고 있음
                 그 메소드는 메세지를 보내 처리해준 다음에 결과를 보낸 걸로 생각함
                 = 곧 OOP의 개념
        - 정리: 즉, 결과는 동일하나 개념적으로 다름
               호출된 함수(Calli) - 호출한 함수(Caller)
               
    10. 클래스 메소드 또는 클래스 변수
      - 클래스에 존재하며 인스턴스를 만들지 않아도 사용 가능
      - 클래스 변수: 클래스의 한 복사이다.(인스턴스 없이 호출 가능, 인스턴스는 카피가 안생김)
      - 일반적인 것은 인스턴스 메소드, 인스턴스 변수
    
    11. 단일 상속과 다중상속
      - C++ : 다중 상속 (multiful inheritance: 여러 부모에게 상속 받을 때, 자바는 다중상속 금지)
      - Java: 단일 상속 (single inheritance: 부모 하나만 상속받을 때)

    12. 다형성
      - 다형성을 실현하기 위해선 동적 바인딩 해야 함
      - 부모의 포인터로 어디에 접근할지 결정할 수 있음
        
#### 3. Design Issues for OOLanguages
#### 4. Support for OOP and Specific Languages
#### 5. Implementation of OO Constructs
#### 6. Reflection
