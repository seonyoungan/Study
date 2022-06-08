### 4. Lexical and Syntax Anaysis

#### 1. Introduction
    1. 프로그램을 실행시키는 3가지 방법
      - Compilation
      - Pure Interpretation
      - Hybrid implementation
    2. Compiler
      - slow translation: machine code로 변경하는 데에 시간이 오래 걸림
      - fast execution: 실행 속도 빠름
      - tokenized: 문자들을 토큰으로 변환
      - parse tree: 의미 있는 토큰을 문법적 구조로 나타내는 parse tree만들고 문법적으로 올바른지 판단
      - type checking: intermediate code를 생성한 후 의미론적 부분 체크
      - target machine dependent code: 환경에 종속적
    3. Pure Interpreter
      - no compile: 컴파일하지 않음
      - slow execution: 한줄한줄 번역하므로 컴파일한 후 실행하는 것보다 속도 느림
      - large memory area: sorce code 또는 symbol table을 실행해야하므로 많은 메모리 공간 차지
      - portability: 이식성 좋음
    4. Hybrid
      - JIT(Just In Time): 고급언어가 intermediate code로 번역되는 과정을 거치므로 pure interpreter보다 속도 빠름
      - Java, .Net이 Hybrid 방법 사용
      - portability가: 코드 자체에는 portability가 있으나 마지막엔 CPU에 맞는 머신코드 작성 작업이 필요함


#### 2. Lexical Analysis
    1. pattern matching
      - I am a man.
        I 읽음→공백 읽음→ a 읽음→m 읽음→공백 읽음→독립된 어휘가 있음을 판단하고 사전에서 확인→m읽음........
        프로그래밍의 경우, index = a + sum;
    2. A lexical analyzer serves as the front end of a syntax analyzer.
       Technically lexical analysis is a part of syntax analysis.
       - 즉, 프로그램을 char단위로 읽음→lexeme 찾음→token찾음
       - String: keyword or identify.
    3. Lexical Analysis의 역할
       - 기계어를 만들 때 상관 없는 부분은 지나친다. 즉, 의미가 있는 lexeme만 찾는다.
       - 사용자가 만든 이름들(variables)을 등록한 장소에 등록이 안되어있으면 error
       - 잘못된 literal 찾아내어 error
    4. Lexical Analyzer 정리
      - lexeme을 찾아 토큰을 붙인 후 Syntax analyzer에 보내주기
      - 그외의 Object Code와 관련 없는 부분은 Skipping
      - 변수들을 symbol table에 정리
      - 잘못된 literal 찾아내기
    5. Lexical Analyzer를 만드는 방법
      - 3가지가 존재하나, 가장 자주쓰는 방법만 배움
      - Static transition diagram(상태천이도)
      - 예) 주차장 개폐기
        개폐기down→(현실: 차 나타남 / action: 모터 작동)→개폐기up→(현실:시간 흐름 / action: 모터 작동)→개폐기down
        - 맨 처음 개폐기down: Start State / 마지막 개폐기down: Final State
    6. 기타
      - lexical analyzer = math's finate automata
      - ragular language
        - 문자열을 표시하는 방법중 하나로
        - lexical analyzer라는 패턴을 표시→패턴 매칭→하나의 lexeme 찾음→ragular language

#### 3. The Parsing Problem
    1. 책에서 syntax analysis = parsing
    2. parsing의 2가지 방법
      - Top-Down Parsing(=Recursive-Decent Parsing)
        - Root(Start Symbol) → leaf
        - 언제까지? Non-Terminal들이 없어질 때까지 extend
        - LL Algorithm
          - 트리 생성
          - 재귀 가능, 속도 느림, 메모리 많이 차지(compare Bottom-Up)
      - Bottom-Up Parsing
        - leaf → Root(Start Symbol)
        - 즉, 마지막에 남는 건 Start Symbol
        - 오른쪽의 handle한 후 오른쪽 패턴 stack을 shift함 (shift하는 것: reduce)
        - LR Algorithm
          - parsing table 생성  
          - 재귀 불가, 속도 빠름, 메모리 적게 차지(compare Top-Down)
     
    3. Parsing의 목적
      - 주어진 program이 문법적으로 맞는지
      - error가 발견되면 diagnostic message
        what? x = y + z;라는 구문에서 개발자가 ;를 빠뜨리는 경우
        compiler error message → recovery and compile
        초기: error message만 올리고 끝남
        요즘: error message를 띄우고 ;가 있는 것으로 판단햐ㅏ고 컴파일함
              물론 코드 생성까진 안가지만 ;가 있는 것으로 감안한 후 뒷부분도 컴파일을 해줌
