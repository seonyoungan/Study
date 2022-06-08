### 08. Statement-Level Control Structures


#### 1 Introduction
    1. Selection: if-then-else / switch-case
    2. Iteration: for(counter) / while(logical Iteration) / Data Structure에 의한 Iteration
    3. 배정문(Assignment Statement)
      - 값을 바꿔주고 결과를 얻는 것을 일컫음
    4. 제어문(Control Statement)
      - PC의 값을 바꿔주는 흐름, 배정문으로 처리할 수 없음
      - readablity가 중요하다.
      - 제어문에 관해 여러 논쟁이 있었지만 살아남은 것들이 지금의 제어문이다.
    5. 최초의 컴퓨터(대중 보급에 가까운): 매킨토시
    6. SE는 1970년대 중반-후반에 발전
    
#### 2 Select Statements
    1. Select문의 키워드
      - if-then-else : ALGOL
      - case-when : Ruby
      - COND: 함수형언어
      - switch-case: 사실상 고투의 의미
    
#### 3. Iterative Statement
    1. 디자인 할 때 2가지 조건을 만족하도록 해야함
      - 어떻게 반복을 제어할 것인가?
      - 제어 메커니즘이 루프 문에서 어디에 나타나야 하는지
    2. Iterative문의 키워드
      - while-do-while
      - for
      - foreach - in - (C#)

#### 4. Data Structure에 의한 Iteration
    1. C의 스타일: Data Structure에 의한 Iteration
      - OOP는 Iterator라고 함
    2. java의 경우 collection-frame-work에서 queue, linkedlist등 자료구조 제공
    
#### 5 Unconditional Branching
    1. goto문장
      - 보통 while -> structed goto 해도 괜찮음
      - goto문장은 쓰지 말것 -> 이유: 유지보수적으로 좋지 않다.
      
#### 6. Guarded Commands
    1. 다익스트라가 언급
      -  언어 예) if ~~~ [] ~~~ [] ~~~ [] ~~~ fi
                True가 2개 또는 그 이상일수 있고 어떤게 선택될지 모른다.
                
#### 7. Conclusions
