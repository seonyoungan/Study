### 1. Preliminaries

#### 1. Reasons for Studying Concepts of Programming Language
    1. Increased capacity to express ideas.
    2. Improved background for choosing appropriate language.

#### 2. Programming Domains
    1. Scientific Applications
    2. Business Applications
    3. Artificial Intelligence
    4. Web Software

#### 3. Language Evaluation Criteria
    1. Criteria
        - Readability / Writability / Reliability / cost
    2. Evaluation Items
        - Simplicity / Orthogonality / Data types / Syntax design / Support for abstraction
        - Expressivity / Type checking / Exception handling / Restricted aliasing 
  
#### 4. Influences on Language Design
    1. computer Architecture(von Neumann Architecture)
        - Imperative Language에서 사용함
        - Central processing unit(CPU)
          - fetch: 프로그램이 실행되려면 메모리에 있는 instruction을 가져옴
          - decoder: fecth값을 연산(더할지 뺼지 등)할건지 정함
          - fetch execute cycle of CPU
            Instruction의 위치:memory, 실행: CPU
            CPU 내의 Program Counter라는 Register가 Memory의 어느 번지 Instruction을 fetch할 것인지, 갖고 있는 주소 값을 가져와서 실행
            → Program Counter값은 자동적으로 그 다음 Instruction을 가리킴 → Program Counter는 Instruction(Jump)에 의해 바뀜
      - 4가지 종류의 Instruction(Assembly)
          - Load계열: 메모리 내용→레지스터로 가져옴
          - Store계열: 레지스터값→메모리로 가져감
          - 온갖 종류의 Arithmetic and logic unit(ALU)
          - JUMP: Program Counter 바꿔줌(제어문, 반복문, 분기문, ...)

    2. Programming Design Methodologies
      - background
        - 1950년 컴퓨터가 처음 만들어지고 응용 분야 확장+프로그램의 사이즈가 커짐
        - SW를 효율적으로 잘 개발할 수 있을까 고민
        - 이런 SW Engineering을 통해 언어 설계에 반영됨
        - 1980년대 객체 지향의 개념이 나오고, 그 설계가 나옴 (최초의 언어: Small Talk)
        - 데이터에 의한 추상화함
        - Small Talk는 실패했지만 C#과 JAVA 등이 나옴

#### 5. Language Categories
    1. 4 Categories
        - Imperative -C
        - functional -LISP
        - logic -plolog
        - object oriented
    2. Markup Language
        - HTML: Text, Img, Video를 문서화한 fomatting language   
          HTML을 주고받는 통신 프로토콜: http   
          HTML을 복원시키는 작업을 하는 곳: 웹브라우저   
        - Analog → Digitization   
          입력: 사람의 소리, 화상, 촉감, 맛 등 오감→ 출력: 디지털화하여 표현   
          Sampling → Quantization → 압축   
            - 화면 하나하나를 pixel(점)의 집합으로 본다.   
            - 사진→ x축: 공간 / y축: 주파수   
            - 음성→ x축: 시간 / y축: 주파수   
              10,000pixel에 16bit color 사용= 16,000bit 필요  
              영상 송출: 16,000bit * 30fps = 480,000bit   
              음성 Sampling: 8,000번/sec * 8bit = 64bps   

#### 6. X

#### 7. Implementation Method
    1. 초기: 기계어로 프로그램 설계
       → 복잡한 프로그램일수록 어려움 → 컴파일러를 이용해 고급 언어 만듦 (최초의 고급 언어: 포트란)
    2. 프로그램 실행시키는 방법(high-level)
        - compiler / interpreter / hybride
    3. process
        - Compiler process
        - Pure Interpretation process
          장점: portability
                CPU상관 없이 인터프리터가 있으면 소스프로그램 실행 가능
                자바도 JVM이 있으면 byte code가 어떤 CPU든 OS든 상관 없이 실행 가능
          단점: 속도 느림, 메모리공간도 CPU보다 많이 차지
        - Hybrid implementation systems
              compile → intermediate 생성 → intermediate code 실행  (intermediate: 기계어 레벨)
              java: 초기에는 hybrid방식 사용→속도느림→ 최근: 실행시 byte코드를 머신코드로 바꾸는 방식 나옴(Just In Time방법)
          Just In Time(JIT)
              클래스: byte code로 만들어짐 → 클래스의 method 호출시 머신코드로 바꿈 → 머신코드 실행
              인터프리터를 사용하는 이유: portability     
    4. Preprocessors
        - include 활용..(?)
        - 사용하는 언어를 mark하고 확장한 것
        - 기업 등에서는 자체 확장 언어 사용→프로그램을 쉽게 짤 수 있음→그러나 언어로 바꿔주는 과정이 필요하다.
    
#### 8. Programming Environments
    1. Environments: 적당히 활용하는 것이 필요하다. (파일시스템, 에디터, 링커, 관리툴, 클래스, 라이브러리 등)
    2. Unix
    3. Borland Jbuilder: Java software
    4. Microsoft Visual Studio: NET, JScript, C#, F#
    5. NetBeans: JavaScript, Ruby, PHP
