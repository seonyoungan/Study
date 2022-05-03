### 3. Describing Syntax and Semantics

#### 1. Introduction
    1. 모든 언어(자연어, 프로그램이언어)에는 문법과 의미가 있다
      - 문법: Sentence를 쓰는 방식으로, 글은 Sentence의 집합체
      - PL: 함수의 집합체(함수는 Statement의 집합체)
    2. 프로그래밍의 기본이 되는 문장은 배정문(Assignment statement)
      - 배정문: A + B = C
    3. 공부목표
      - 3장: PL문법표현시 식, 문법, 의미에 대한 이해
      - 4장: 컴파일러가 어떻게 진행되는지 이해

#### 2. The General Problem of Describing Syntex
    1. Word Checking
      - sentence / statement / lexeme / token
    2. Tokens are a category of lexemes.

#### 3. Formal Methods of Describing Syntax
    1. Context-Free-Grammars
      - 1950년대, Noam Chomsky와 John Backus가 결론 도출
      - Noam의 복잡도에 따른 세계 자연어 연구 후 level 나뉨
    2. Context-Sensitive VS Context-Free
      - Context-Sensitive: 대부분 자연어로, 문맥에 따라 의미가 달라질 수 있음
      - Context-Free: PL의 지향점으로, 문맥 전후 상관 없이 단 한 개의 의미를 가짐
    3. Context-Free-Grammars 표현방법: BNF
      - John이 제안 + Naur 보완
      - ALGOL60문법은 바커스 방법으로 표현됨
      - 처음엔 사람들이 이해하지 못했으나, 곧 널리 퍼져 프로그래밍 문법 표현의 인기있는 방법이 된다.
    4. metalanguage: data for data
      - 예: 책-data / 책의정보- mata data
    5. BNF의 Notation
      - →   : Rule, 왼편이 어떤 식으로 구성되었는지 표시함
      - <…> : Non-Terminal, 최종 결과 도출시 왼편에만 존재해야함 (↔Terminal)
      - |   : OR
    6. RHS와 LHS
      - RHS: Right-hand side
      - LHS: Left-hand side
      - 노테이션은 보톤 LHS → RHS로 구성
    7. 이외 용어
      - [] : square bracket, zero | once
      - () : prances bracket, (a|b) (+|-) 
      - {} : braces bracket, zero | more (재귀적 표현ok)
        - {}+: once | more
      - <> : pointed bracket

      - recursive(재귀적): Rule의 왼편이 오른쪽에 다시 나타나는 것
      - Gramma: Rule들의 집합
      - Start Symbol: 제일 위에 존재하는 룰의 왼편

     8. Ambiguity
      - 예: 우리는 무섭게 생긴 그 사람의 강아지를 보았다 => 2개의 parse tree 도출
        모호점: 무섭게 생긴 그사람? 무섭게 생긴 강아지? => 결과값이 달라질 수 있음(식의 도출은 수학 규칙을 따르기 때문)
      - 연산자의 종류 (수학 규칙을 따름)
        - Precedence(우선순위 법칙)
          연산자 우선순위가 가장 낮은 것부터 정의함. 우선순위가 높을수록 아래로 내려간다.
        - Associativity(결합법칙)
          연산자의 오른쪽에서 재귀: 우결합에 사용
          연산자의 왼쪽에서 재귀: 좌결합에 사용

     9. Extended BNF
      - BNF: 3개의 기호( → <…> | )로만 문법 표현
      - EBNF: 3개의 기호 + [] {} () 

     10. 언어의 문법이 주어지면, 그 문법에 기초해 컴파일러를 만든다.
         - 예, a언어 문법 → 자동생성기 → a언어의 컴파일러
         - 즉, BNF → 자동생성기 → Syntax Analyzer
