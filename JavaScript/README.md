# 자바스크립트 기는법부터 공부해보기   
학습영상 : 생활코딩(https://www.youtube.com/user/egoing2 또는 https://opentutorials.org/module/532)   
   
## 1. 숫자&문자
  <b>1. 자바스크립트는 큰 따옴표 or 작은따옴표가 붙지 않으면 숫자로 인식한다.</b>  
```js
    alert(1); // alert에 정수값 출력
    alert(1.1); //실수
    alert(2*6); //곱하기
    console.log(3/2); // console에 나누기값 출력
    Math.pow(3,2); // 3^2 Math 수학과 관련된 명령들의 카테고리 .pow : 내의 제곱을 하는 명령
    Math.round(10.6); // 반올림
    Math.ceil(11.3); // 가까운 쪽에 있는 위의 정수로 올림
    Math.floor(10.2); // 가까운 쪽에 있는 아래 정수로 내림
    100 * Math.random(); // 숫자 100보다 작은 난수, Math.random()는 1보다 작은 수로 출력됨.
```
  <b>2. 문자는 "" 또는 '' 사이에 넣어주어야 한다.</b>  
    - "' 또는 '" : SyntaxError 문법오류 발생
```js
    alert("hello");
    alert('hello');
```
  <b>3. 역슬래시 사용법</b>   
    - 문자중에서 '나 "를 넣고 싶을 때   
      -> \ 바로 뒤의 문자는 문자의 시작과 끝의 의미가 아닌, 우리가 보고 있는 문자 그대로 출력된다.(이스케이프)
```js
    alert("hello, Seonyoung\'s world");
```
  <b>4. 문자열</b>
    - "abcde" : 문자들의 집합(String)   
    - 문자열은 연산도 가능하다.   
```js
    alert("hello" + " Seonyoung\'s world\n");
    "hello".length // 문자열의 길이를 알려준다.
    "hello".indexof("o") // 결과 : 5이다. .indexof는 앞에 있는 문자열부터 o의정보를 찾고 5번째임을 알려줌
```

## 2. 변수와 상수
  <b>1. var</b>
```js
    var a = 1, b = 2;
    alert(a); // 결과 : 1
    alert(a+b); // 결과 : 3
    a = 4;
    alert(a); // 결과 : 4
    alert(a+b); // 결과 : 6
  
    var c = "hello";
    alert(c+" HELLO") // hello HELLO
```
  <b>2. let, const</b>
   - 변수 재선언 불가   
   - let : 재할당 가능함
   - const : 재할당 불가능   
   - 때로는 var 같기도 하다가,, let 같기도 한 사람이 되어야지,,     

## 3. 비교
   <b>1. 연산자 : 작업을 컴퓨터에 지시하기 위한 약속된 기호들</b>   
   - 대입연산자 : =, 좌항을 우항에 대입   
   - 동등연산자 : ==, 좌항과 우항이 동일하면 true, 아니면 false   
   - 일치연산자 : ===, 좌항과 우항이 정확하게 일치하면 true, 아니면 false   
   - != : 부정 | !== : 정확하게 같지 않다.   
   - \> : 좌항이 우항보다 크면 참, 아니면 거짓 | \< : 우항이 좌항보다 크면 참, 아니면 거짓   
   - \>= : 좌항이 우항보다 크거나 같으면 참, 아니면 거짓 | <= : 우항이 좌항보다 크거나 같으면 참, 아니면 거짓   
```js
   alert(1=="1"); // 데이터의 type이 달라도 출력된 값이 동일함(같은 의미)으로 true
   alert(1==="1"); // 데이터의type이 다름으로 false
   
   var a; // 변수 a선언
   alert(a); // 결과 : underfind, 아직 값은 선언되지않음
   var a = null;   
   alert(a); // 결과 : null, 개발자가 의도적으로 값을 아직 넣지 않은상태
   
   alert(underfind == null); // 결과 : true
   alert(underfind === null); // 결과 : false // 이처럼 문자에도 동일하게 적용됨.
```
   <b>2. Boolean</b>
   - true, false라는 두개만 존재하는 데이터타입
   - js에서는 1은참, 1이 아닌 숫자는 거짓
   
## 4. 조건문 및 논리연산자
   <b>1. 조건문</b>  
```js
   if(조건문){
      if(조건문){
         //실행할 코드
      } else{
         //실행할 코드
      }
   } else if(조건문){
      //실행할 코드  
   }else{
      //실행할 코드
   }
```
   <b>2. 논리연산자</b>  
   - && : and연산자   
   - || : or연산자   
   - != : not연산자   
   * 장점 : 코드가 간결해진다.

   <b>3. 새로운거</b>  
   - true 간주
      *1 == true   
   - flase 간주   
      *if(''){ alert('빈문자열'};   
      *if (undefined){aleft('undefined)');   
      *값이 할당되지 않은 변수   
      *null
      *NaN   

## 5. 반복문   
   <b>1. while문</b>
      - while의 로직 :   
         - 변수 반복에 대한 기준저 제공의 초기화   
         - 변수 갱신의 반복실행   
         - 반복 조건   
      - 예를들어 실행 코드가 길어져 구성요소들이 멀리 떨어진다면, 실수를 범할 확률이 높아지며 가독성이 떨어진다.   
         => for문을 쓰면 가독성이 좋아지고 문제 발생의 요소가 현저히 낮아질 수 있다.   
```js
   while(조건문){
      //실행할 코드
   }
   
   var a = 0;
   while(a <= 5){
      document.write("hello world+i+<br />");
      a++;
   }
```
   <b>2. for문</b>   
   - for문   
```js
   for(var i = 0; i < 10;i++){
      document.write("hello world+i+<br />");
   }
```
   <b>3. 반복문의 제어</b>   
   - break; // 멈춰!   
   - continue; // 뚫고 지나가요,,,   
   
   <b>4. 반복문의 중첩</b>  
```js
   for(var i = 0; i < 10;i++){
      for(var j = 0; j < 10;j++){
         document.write("hello world+i+j+<br />"); //이 때, i와 j는 문자열의 결합이다.
      }
   }
```   
  
--- ↑2021.12.21 작성↑ --- 

## 6. 함수
   <b>1. 함수의 형식</b>   
   -  코드의 재사용성 ↑ (하나의 로직을 재실행할 수 있도록하기 때문임.)   
```js
   funcion  numbers(){
   i=0;
   while(i<10){
      document.write(i);
      i++;
      }
   }
   numbers();
```   
   <b>2. 함수의 장점</b>           
   - 재사용성 ↑ | 유지보수에 용이함. | 가독성 ↑   
   
   <b>3. 함수의 기능</b>
   - 출력 : return (정지 후 반환)   
   - 입력 : 매개변수 개수와 인자의 개수는 같아야 한다.   
   * 여러개의 인자를 가질 수 있지만 return은 1개이다.   
```js
   funcion  numbers(arg1, arg2){ 
      return arg1 + arg2;
   }
   numbers(10,20); // 출력값 : 30
   numbers(30,20); // 출력값 : 50
```

   <b>4. 함수의 정의</b>   
   - 새로운 형태의 함수 생성 
```js
   numbering = function(){
      i=0;
      while(i<10){
         document.write(i);
         i+=1;
      }
   }
numbering();
```

   <b>5. 익명함수 : 일회성. 이름이 필요없고 바로 사용할 때 생성</b>   
```js
   (function(){
      i=0;
      while(i<10){
         document.write(i);
         i+=1;
      }
   })();
```
   <b>6. 매개변수와 인자</b>
```js
function a(arg){ // 여기서 arg == 매개변수(parameter)
}
a(1); // 여기서 1 == 인자
```

## 7. 배열   
   <b>1. 생성방법</b>   
      var a=['원소1','원소2','원소3'];   
      a[0] = 원소1, a[1] = 원소2, a[3] = 원소3인 것이다.   
   
   <b>2. 배열에서의 return 값</b>   
```js
   function a(){
      return ['원소1','원소2','원소3'];
   }
   
   var va = a();
   document.write(a[0]); // 출력값 : 원소1
   document.write(a[1]); // 출력값 : 원소2
   document.write(a[2]); // 출력값 : 원소3
```
   <b>3. 배열과 반복문의 결합</b>   
```js
   function a(){
      return ['원소1','원소2','원소3'];
   }
   var va = get_members();
   for(var i=0; i < va.length; i++){
      document.write(va[i].toUpperCase()+"<br />");
   }
```
   <b>4. 데이터 추가</b>   
   - .push('f'); : 맨 뒤에 원소가 추가됨   
   - .concat(['f','g']); : 배열의 형태로 선언, 맨 뒤에 원소가 추가됨   
   - .uhshift('x'); : x를 배열의 시작지점에 추가(맨앞에 추가됨)   
   - .splice(1,0,'d'); : 첫번째 인덱스(1)를 삭제하고, 맨 앞부분(0)에 d('d)를 넣어라   

   <b>5. 배열의 제거</b>   
   - li.shift(); : 맨 앞의 원소 삭제   
   - li.pop(); : 맨 뒤의 원소 삭제   

   <b>6. 배열의 정렬</b>   
   - li.sort(); : 순방향으로 정렬   
   - li.reverse(); 역방향으로 정렬   
   - 이외에 본인이 원하는대로 정렬이 필요할 경우는 다른 방법을 고안해야함(구글링하자)   
   
   --- ↑2021.12.22 작성↑ --- 
   
## 8. 객체
   <b>1. 자바스크립트의 객체란</b>   
   - 연관배열 또는 맵 또는 딕셔너리     
   - 데이터를 담아내는그릇의 개념   
   - 중괄호를 사용한다.   
```js
//방법1.   
   var grade = {'kor' : 100, 'eng' : 60, 'math' : 80}; // 변수를통해 객체 지정할 수 있다.   
// 방법2.   
   var grades= {} : // 비어있는 객체생성   
   grades['kor'] = 100; // kor == 색인의 역할(key), 100 == 키에 연결된 값(=value)   
   grades['eng'] = 60;
   grades['math'] = 80;
```
   - 비어있는 객체 생성시에는..   
      <b>{} == new object();</b> 와 동일하다!   
   - 키에 접근할 때에는...   
      <b>grades.['k8805']</b> // 문자열이므로 ['k8805']  == ['k88' + '05']   
      <b>grades.k8805</b>   
```js
// 호출할 때
   var grade = {'kor' : 100, 'eng' : 60, 'math' : 80}; // 변수를통해 객체 지정할 수 있다.   
   for(key in grades){
      document.write("key: " + key + "value: " + grades[key] + "<br />"); // 키값호출
      document.write(grades[key]); // value값 호출
   } 
```

   <b>2. 객체지향 프로그래밍</b>   
   - 객체 내 객체 생성 가능   
 ```js
// 호출할 때
   var grade = {
   'list' : {'kor' : 100, 'eng' : 60, 'math' : 80};
   }
   alert(grade['list']['kor']); //객체 내 객체 호출시
```

   - 객체 내 객체생성시 함수 형태도 가능   
```js
// 호출할 때
   var grade = {
   'show' : function(){
      alert('HELLO WORLD');
      }
   }
   grade['show'](); //객체 내 함수형태의 객체 호출시
```
   <b>3. this 변수</b>   
   - js에서 정해져있는 약속된 변수 :  <b>this</b>   
      보통 함수가 속해있는 객체를 가리킬 때 this를 사용할 수 있다. (물론 맥락에 따라 달라질 수 있음)   
```js
   var grade = {
   'show' : function(){
      for(var name in this.list){
         console.log(name, this.list[name]);
      }
   }
   grades.show();
```      
## 9. 모듈
   <b>1. 모듈의 필요성</b>   
   - 코드의 재활용성 높임   
   - 보다 쉬운 유지보수   
      - 그중 하나는 코드를 여러 개의 파일로 분리하는 것   
   - 코드분리의 장점   
      - 자주 사용되는 코드를 별도 파일로 만들어 필요시마다 재활용할 수 있게 함   
      - 코드 개선하면 이를 사용하고 있는 모든 앱의 동작이 개선됨   
      - 코드 수정시 필요 로직을 빠르게 찾을 수 있음   
      - 한번 다운된 모듈은 웹브라우저에 의해 저장됨으로 동일 로직을 로드할 때 시간, 네트워크 트래픽 절약 가능(브라우저만)   

   <b>2. 모듈이란?</b>   
   - js는 모듈의 개념이 분명히 존재하지는 않음   
   - 그러나 js가 구동되는 호스트 환경에 따라 <b>서로 다른 모듈화 방법 제공됨</b>   
   - 호스트 환경이란?   
      - js가 구동되는 환경 (예 - node.js, GoogleAppsScript 등)   

   --- ↑2021.12.25 작성↑ --- 

## 10. UI와 API, 문서보기 

## 11.정규표현식
   1. 정규표현식이란? 여러 데이터들 중 어떤 패턴을 찾아 간결하게 만드는 것   
   2. 컴파일과 실행   
   - 컴파일 : 패턴찾기 / 실행 : 대상에 대한 구체적 작업하기   
   3. 정규표현식 패턴 만들기   
```js
   //정규표현식 객체를 패턴에 저장하는 두가지 방법
   var pattern = /a/; // 정규표현식 리터럴,  슬래시와 슬래시 사이를 우리가 찾고자하는 것임을 알려줌
   var pattern = new RegExp('a'); // 정규표현식 객체 생성자, 위의 /a/와 같음.
```      
   4. 정규표현식 메소드 실행   
   - 정규표현식에서 컴파일 객체 생성->문자열에서 원하는 문자 찾아내기   
```js
   //정규표현식 객체를 패턴에 저장하는 두가지 방법
   var pattern = /a/; // 정규표현식 리터럴 (a를 찾으라는 의지를 볼수있덩,,)
   pattern.exec('abcde'); // 결과값 : a
   
   var pattern = /a./; // 정규표현식 리터럴 (a뒤에 문자까지 나타내게끔)
   pattern.exec('abcde'); // 결과값 : ab로 나옴
   var pattern = /a/;
   pattern.exec('bcdef;); // 결과값 : null
```  
   - exec(추출) : 정규표현식이 찾고자하는 패턴을 대상에서 찾아서 배열로 리턴하는 메소드      
   - test(테스트) : 검색의 대상이 되는 첫번제 인자 정보 안에 우리가 찾고자 하는 정보가 있는 경우 true, 아니면 false 리턴하는 메소드   
   - replace(치환) : 문자열에서 패턴 검색해서 변경한 후에 변경된 값을 리턴한다.   
   
   5. 정규표현식의 옵션   
   -   i : 대소문자 구분 안하게 함   
```js
   val xi = /a/;
   "abcde".math(xi); // 결과값 : null
   
   val oi = /a/i;
   "Abcde".math(oi); // 결과값: ["a"]
```     
   
   -   g : 글로벌의 약자로, 패턴에 해당되는 모든 문자를 찾고자할 때 사용   
```js
   val xg = /a/;
   "abcde".math(xg); // 결과값 : null
   
   val og = /a/g;
   "abcdea".math(og); // 결과값: ["a","a"]
```  

   --- ↑2021.12.29 작성↑ --- 
   
## 12. 유효범위
   <b>1. 전역변수, 지역변수 </b>   
   - 가까운 곳에 있는 변수를 출력해냄   
   - 전역변수 : 함수 밖에서 변수 선언한 경우   
      (for, if문 등의 중괄호 내에서 변수 선언시에도 전역변수임)   
   - 지역변수 : 함수 내에서 변수 선언한 경우   
```js
//case1
var vscope = 'global'; //전역변수
functio fscope(){
   var vscope = 'local'; //지역변수
   alert(vscope);
}
/*결과값 : local
가장 가까운 곳에 있는 변수가 출력됨ㅋ*/

//case2
var vscope = 'global'; //전역변수
functio vscope(){
   alert(vscope);
}
/*결과값 : global*/
```
   <b>2. 왜 전역변수를 써야하는지를 이해 못했다면? </b>   
   - 지역변수를 써야함.   
   - 협업이나 방대한 코드를 보게될 때 똑같은 의미의 변수를 다른의미로 사용하는 경우가 생길 수 있기 때문임.   

   <b>3. 유효범위 </b>   
   
```js
function a (){
   i=0; // var이 없으면 전역변수를 의미함
}
for (var i = 0; i< 5; i++){ //함수 밖에서 사용하였으므로 전역변수
   a();
   document.write(i);
}
/*결과 : 무한로딩이 될 것임.
전역변수가 충돌하는 문제가 발생하게됨*/
```

   <b>4. 전역변수 사용법 </b>   
   - 본인만이 쓰는 큰범위의 전역변수 하나를 두고, 전역변수의 객쳉처럼 사용할 수 있음.   
     (전역변수 안에 자신이 필요한 여러가지 사용해야하는 전역변수들도 넣어둘 수 있음.)   
   - 만일 위의 과정도 불안or불편하다면 함수로 감싸서 지역변수로 만들어서 활용할 수도 있음.   


   <b>5. 정적 유효범위 </b>   
   - 사용될 때가 아닌 정의될 때 전역변수가 사용된다.   
   


## 13. 값으로서의 함수와 콜백   
   <b>1. 함수의 용도 </b>      
   - 자바스크립트는 함수도 객체이다. (즉, 함수 자체가 값이 될 수 있음.)   
   - 값의 특징 : 1) 변수에 담을 수 있음. = 함수도 변수에 담을 수 있음.   
   - 함수는 객체 안에 저장될 수 있다.   
   - 속성 : 객체 안에서 변수의 역할을 하는 것   
      - 그것이 함수일 경우에는 method라고 부른다.   
```js
//case1
var a = function(){} // 변수 a에 담김
//case2
function a(){} 
//case1과 case2는 동일하다.
   
//case3
a = { 
   b: function(){
    } 
}; //a안에 담긴 객체는 b라는 함수가 담겨있는데, b는 method라고 부른다.
```
   - 함수는 값이기 때문에 다른 함수의 인자로 전달될 수도 있음.   
   
   --- ↑2022.01.06 작성↑ ---    

   <b>2. 함수=값이므로 다른 함수의 인자로 전달될 수 있다. </b>   
```js
//func1
function cal(func, num){ //첫인자 func, 두번째인자 num
   return func(num);
   /*cal의 첫번째 인자로 전달된 func에 담긴 함수를 호출하면서,
   두번째 인자(=num)로 전달된 값을 호출된 함수의 첫번째 인자로 호출한다는 것.*/
//func2
function increase(num){
   return num+1; //인자로 된 값 + 1 리턴
}
//func3
function decrease(num){
   return num-1; //인자로 된 값 - 1 리턴
}
alert(cal(increase, 1)); // 결과값 : 2
/* 위의 호출된 사항을 풀어보자면
function cal(func, num){
   var func = increase(num){
      return num+1
   }
   func(1)
} //즉 결과값 : 2 */

alert(cal(decrease, 1));
/* 위의 호출된 사항을 풀어보자면
function cal(func, num){
   var func = decrease(num){
      return num-1
   }
   func(1)
} //즉 결과값 : 0 */
```
   <b>3. 함수 리턴값으로도 사용 가능.. </b>   
```js
function cal(mode){
   var funcs = {
      'plus' : function(left, right){return left + right},
      'minus' : function(left, right){return left - right}
   }
   return funcs[mode];
}
alert(cal('plus')(2,1));
/*cal을 호출할 때, plus를 첫뻔째 인자로 호출, 그것의 함수를 호출!
즉, left==2, right == 1. 2+1을 return함
결과값 : 3*/

alert(cal('minus'(2,1));
/*cal을 호출할 때, minus를 첫뻔째 인자로 호출, 그것의 함수를 호출!
즉, left==2, right == 1.2-1을 return함
결과값 : 1*/
```

   <b>4. 배열의 값으로 사용 가능 </b>  
```js
var process = [
   function(input){  return input + 10}; //for문의 input = process[i](input); 에 집어넣으면 i의 값이 0일 때를 이function을 의미 (값 : 11)
   function(input){  return input + 10}; //for문의 input = process[i](input); 에 집어넣으면 i의 값이 1일 때를 이function을 의미 (값 : 121)
   function(input){  return input / 2}; //for문의 input = process[i](input); 에 집어넣으면 i의 값이 2일 때를 이function을 의미
]; (값 : 60.5)
var input = 1;
for(var i = 0; i<process.length; i++){ // i값은 0, 1, 2 가 만들어짐.
   input = process[i](input); 
}
alert(input);
//최종 결과값 : 60.5
```
   <b>5. first-class citizen(또는object 등등 blah blha...)</b>   
   - first-class citizen : 변수, 매개변수, 리턴값 용도로 사용될 수 있는 데이터   

## 14. 콜백   
   <b>1. 쩝....</b>   
```js
var numbers = [20, 10, 4, 5, 7, 8, 2, 1, 8, 22];
var sortfunc = function(a, b) {
    console.log(a,b);
    // case1
    return a - b;
    
    // case1
    if(a > b){
        return 1; //양수
    } else if (a < b){
        return -1; //음수
    } else {
        return 0; //0
    } */0
} //리턴 값을 어떤 것으로 하느냐에 따라, 비교하고 있는 대상 a,b를 비교 후 판별할 수 있음.
console.log(number.sort(sortfunc));
```
   <b>2. 비동기 콜백</b>   
   - 비동기 asynchronous Javascript and XML (더 알고시프면 ajax를 공부해보자)   
   - 예시   
      - 동기적처리 : 글작성 -> 이메일발송 -> 작성   
      - 비동기적처리 : 글작성 -> 이메일발송(예약) -> 작성완료 (like todo..너낌~)
      - 이러한 비동기적처리는 보통 ajax를 활용해서 처리함   
   - 웹쪽으로 공부할 때의 내가 이해하겠지?   
   
## 15. 클로저   
   <b>1. 내부함수와 외부함수의 관계</b>   
   - 함수 안에서 또다른 함수 선언   
   - 코드의 응집성을 높일 수 있다.    
```js
function outter(){ //외부함수
   var title = 'coding everybody'; //외부함수에 정의된 지역변수!
   function inner(){ //내부함수
      var a = 'a'; //내부함수에 정의된 지역변수
      alert(title);
   }
   inner();
}
outter();
//결과값 : coding everybody가 alert로 뜸.
```
   <b>2. 클로저란</b>
   - 내부함수에서 외부함수의 지역변수에 접근할 수 있다!   
   - 외부함수의 실행이 끝나서 외부함수가 소멸된 이후에도 내부함수가 외부함수의 변수에 접근할 수 있다.
```js
function outter(){
   var title = 'coding everybody';
   return function(){
      alert(title);
   }
}
var inner = outter();
inner();
/* 이상해보일 수 있는 이유 : outter는  내부함수를 return했기에 외부함수는 생을 종료한 것임.
그러니 outter();는 생을 종료했는데! 계속 실행됨 like 영혼처럼.. 
정리하자면, 클로저는 내부함수를 내포하는 외부함수의 지역변수에 접근 가능함. */
```
   <b>3. 클로저의 활용</b>   
   - private variable가 필요한 이유   
      - 프로젝트가 커지거나 협업을 하면 많은 사람들이 코드를 수정할 수 있음.   
      - 따라서 변수의 값을 변경할 때 바뀌면 오류의 가능성이 커지므로, private한 변수를 쓰면 쫌더 안전장치 같은 느낌쓰 먼지 rg,,     
   
## 16. 아규먼트 및 함수의 호출   
   <b>1. argument</b>   
   - argument : 함수에서 변수에 담긴 숨겨진 유사 배열   
     - 함수호출시 입력한 인자가 담겨 있다.   
```js
function sum(){ //매개변수 없음
   var i, _sum = 0;
   for(i = 0; i < arguments.length; i++){ 
   /* argument : js의 특수한! 약속된 이름의 변수명임(arguments에는 arguments라는 유사 배열이 담겨있음)
   그래서 이 객체를 통해서 사용자가 작성한 인자들에 접근할 수 있는 것임.*/
      document.write(i+':'+arguments[i]+'<br>');
      _sum += arguments[i];
   }
   return _sum;
}
document.write('result : ' + sum(1,2,3,4)); //인자 : 1,2,3,4
/*js에서는 매개변수와 인자의 개수가 다르거나, 매개변수가 없거나 해도 error는 발생하지 않는다.
   arguments 덕분에 사용자가 전달한 인자의 수만큼 for문이 반복해서 실행될 수 있음.*/
```
   <b>2. arguments의 역할 2가지</b>   
   - .length를 통해 객체를 포함하고 있는 함수가 몇개의 인자를 가지고 있는지 알 수 있음.   
   - arguments[index값] 전달하는 것을 통해 sum의 대입된 인자의 특정한 특정 자리수의 값을 알아낼 수 있음.   

   <b>3. 매개변수의 수</b>   
   - argument.length를 통해 알 수 있음.   
      - 실제로 어떤 함수로 유입된 인자의 숫자가 몇개인지를 알 수 있음.   
      - 그러나, 그 함수가 몇개의 인자를 명시적으로 정의하고 있는가를 알아낼 수 없음.   
   - 함수의 이름.length =/= arguments.length   

   <b>4. 함수의 호출</b>   
   - 함수는 객체이다.   
   - 만들어둔 함수를 호출하는 방법으로 func.apply 또는 func.call 등이 있다. (사용방법이 각각 다름)   
   - func.apply : func()와 같은의미임. 즉, apply는 func라는 함수에 담겨있는 method임.   

   <b>5. apply의 사용</b>
```js
o1 = {val1:1, val2:2, val3:3} // 6
o2 = {v1:10, v2:50, v3:100, v4:25} //185
function sum(){
   var _sum = 0;
   for(name in this){
      _sum += this[name];
   }
   return _sum;
}
alert(sum.apply(o1)); // 6
alert(sum.apply(o2)); //185
/*sum이라는 method를 호출할 때, sum이 합계를 더하는대상이 각각 o1, o2인것임
이게 가능한 이유? => this덕분.
1. sum.apply => sum호출한다.
2. o1이라는 객체를 인자로 주면 o1이 sum이라는 함수의 this가 된다.
   (var this = o1;이라는 코드가 들어간 것이라 생각하자.)
3. o1이 가진 값들을 리턴하여 코드가 실행된 것임.*/
```
   --- ↑2022.01.07 작성↑ --- 
   
## 17. 객체지향 프로그래밍   
   <b>1. 객체지향 프로그래밍이란? </b>   
   - 객체(object) : 프로그램을 구성하는 상태와 행위를 grouping해놓은 것   
   - 하나의 프로그램은 여러 목적성을 가진 집합체들이라고 할 수 있다.   

   <b>2. 추상화와 부품화</b>
   - 반영 해야 할 현실을 sw적으로 단순화 시켜서 만드는 행위   
   - 소프트웨어의 설계 -> 복잡한 문제를 단순히 해결하고자 하는 설계라고 할 수 있음   
   - 예) 컴퓨터의 추상화 : 기능으로 쪼개어 부품별로 제품을 제작 -> 구체화   
     - 최초의컴퓨터 : 단일화 -> 현재의컴퓨터 : 모니터, 키보드, 본체, 마우스 등등..   
     - 그러면.. 스마트폰, 맥북 등은 일체형인데? => 시대에 따라,, 적합함을 찾는 것이 중요하다.   
     

## 18. 생성자, 전역객체
   <b>1. 생성자와 new : 객체생성</b>   
   - 객체 내의 변수의 property함수를 metho라고 부른다.   
```js
//case1
// 객체 생성시 가운데 새로운 코드를 입력하면 가독성이 떨어지고 분산될 수 있음.
var Person = {}
person.name = 'egoing';
person.introduce = function(){
   return 'My name is ' + this.name;
}
document.write(Person.introduce();

//case2
// 객체 생성시 응집성이 좋고, 가독성이 좋음
var Person = {
   'name' = 'egoing', 
   'indroduce' = function(){
      return 'My name is ' + this.name;
   }
}
document.write(Person.introduce();
/*결론 : case1, case2 중 어떤 게 더 좋다라고 말할 순 없으나,
객체를 만드는 방법이 다양하다는 것을 알 수 있음*/
```

   <b>2. 생성자와 new</b>   
   - 생성자(constructor) : 객체를 만드는 역할을 하는 함수  
```js 
//case1
function Person(){} // 비어있는 함수 생성
var p0 = Person();
console.log(p0); //결과값 : undefined

//case2
var p1 = new Person();
console.log(p1); //결과값 : Person {}
//new가 앞에 붙어있으면, 뒤의 함수는 (객체의) 생성자가 된다.
```
   - 생성자가 하는 일 : 객체에 대한 초기화라고 할 수 있음.   
   - 코드의 재활용성이 좋고, 보기 쉽다.
```js 
var Person(name) = {
   this.name = name; 
   this.indroduce = function(){
      return 'My name is ' + this.name;
   }
}
var p0 = new Person('egoing');
var p1 = new Person('leezche');

document.write(p0.introduce()+'<br>');
document.write(p1.introduce()+'<br>');
```
   <b>3. 전역객체</b>   
   -.,,
   
## 19. this
   <b>1. 함수와 this </b>   
   - this : 함수 내에서 함수 호출 맥락을 의미함   
   - 상황에 따라 대사잉 달라질 수 있다.   
   - 함수 객체 관계가 느슨한 자바스크립트에서 this는 이 둘을 연결시켜주는 역할을 한다.   
   
   <b>2. 메소드와 this </b>   
   - 메소드의 호출
```js
var o = {
   func : function(){
      if(o === this){
         document.write("o === this");
      }
   }
}
o.func(); // 결과 : o === this
```

   <b>3. 생성자와 this </b>   
   - 아래의 예제에서 알 수 있는 것.
      - 함수로 호출시 함수의 this값은 windows를 가리킨다.
      - 생성자로 사용될 때는 생성된 객체(o2)를 가리킨다
```js
var funcThis = null;

function Func(){
   funcThis = this;
}
var o1 = Func();
if(funcThis === window){
   document.write('window<br>');
} 

var o2 = new Func();
if(funcThis === o2){
   document.write('o2<br>');
}
```

   <b>4. 객체로서의 함수 </b>  
   - 함수 리터럴 : function sum(x,y){return x+y;}   
   - 객체 리터럴 : var a = {} 또는 var a = new Object   
   - 배열 리터럴 : var a = [1,2,3] 또는 var a = new Array(1,2,3)   
```js
function sum(x,y){return x+y;} // 함수 리터럴(literal)
sum(1,2); //결과 : 3
var su2m = new Function('x','y','return x+y;');
sum(1,2); //결과 : 3
//new를 통해 생성자함수로 호출하고, x,y를 지정(함수라면 매개변수처럼), 리턴값을 지정(함수 내용처럼)
```

   <b>5. apply와 this </b>   
   - apply를 호출할 때 첫번째 인자로 지정한 것이 실행된다.   
   - 전통적 객체 지향에서 메소드 : 객체에 강하게 포함되어 있다..   
      - 메소드 : slave(노예), 객체 : master(주인)   

  --- ↑2022.01.08 작성↑ --- 
 
## 20. 상속
   <b>1. 상속의 의미와 사용방법 </b>   
   - 객체 : 연관된 로직으로 이뤄진 작은 프로그램(변수, 메소드, ...)   
   - 상속 : 객체의 로직을 그대로 물려받는 또다른 객체를 만들 수 있는 기능   
      - 기존의 로직을 수정, 변경, 파생해 새로운 객체를 만들 수 있게 해준다.   
```js
function Person(name){
   this.name = name;
 }
 Person.prototype.name = null; //prototype이라는 속성을 준것임.
 Person.prototype.introduce = function(){
      return 'My name is ' +this.name;
}
function Programmer(name){ //새로운 생성자
   this.name = name;
}
Programmer.prototype = new Person();

var p1 = new Programmer('egoing'); //세 객체를 만듦
document.write(p1.introduce()+'<br>'); //결과값: My name is egoing

/* Programer라는 function에는 introduce가 없는데 어떻게 이러한 결과가 나올 수 있을까? 
Person함수에서는 prototype으로 introduce라는 메소드가 정의가되어있음.
Programer가 Person을 상속하기 때문에 가능한것이다. 그럼 어떻게 가능해?
Programger.prototype = new Person(); 이라는 부분에서.
prototype이라는 함수를 생성자함수가 가지고 있는지 확인함.
그 생성자 함수 안에 들어있는 객체와 똑같은 함수를 만들어서 생성자 함수로 return해준다.*/
```

   <b>2. 상속의 기능 추가 </b>   
```js
// 바로 위의 예제와 연결됨
Programmer.prototype = new Person();
Programmer.prototype.coding = function(){ // 새로운 기능 추가
   return "hello world";
}
document.write(p1.coding()+'<br>'); //결과값: hello world
//Person에는 coding이라는 기능은 없고, Programmer에만 존재한다.
```

   - 디자이너라는 직업을 가진 사람의 함수도 만들고, Person함수에서 상속해보자   
```js
function Designer(name){
   this.name = name;
}
Designer.prototype = new Designer();
Designer.prototype.design = function(){
   return "hello design";
}
var p2 = new Designer('hi');
document.(p1.design()+'<br>');결과값: hello design
```
## 21. prototype
   <b>1. prototype이란?</b>
   - 직역 : 원형
   - 함수는 객체이며, 생성자로 사용될 함수도 객체이다.   
     객체는 프로퍼티를 갖는다. prototype는 프로퍼티는 중 하나이다.   
     prototype이라는 프로퍼티는 그 용도가 약속된 특수한 프로퍼티이다.   
     저장된 속성들은 생성자를 통해 객체가 만들어질 때 그 객체에 연결된다.   
```js
function Ultra(){}
Ultra.prototype.ultraProp = true;
function Super(){}
Super.prototype = new Ultra();
function Sub(){}
Sub.prototype = new Super();
Sub.prototype.ultraProp = 2;

var o = new Sub();
console.log(o.ultraProp); // 결과값 : true
//이러한 과정?을 prototype chain이라고 한다.
```

   - prototype chain   
      - case1, 위에서.. 출력값 위에 o.ultraProp = 1;을 추가할 경우   
        => o라는 객체가 ultraProp라는 값을 가지고 있는지 확인함.   
```js
var o = new Sub();
o.ultraProp = 1; //o라는 객체의 확인 순번1
console.log(o.ultraProp); // 결과값 : 1
```
      - case2, 위에서.. Sub.prototype.ultraProp = 2를 추가할 경우   
        => o라는 객체가 ultraProp라는 값이 없음을 js가 Sub.prototype에서 ultraProp값을 가지고 있는지 확인함.   
```js
function Sub(){}
Sub.prototype = new Super();
Sub.prototype.ultraProp = 2;

var o = new Sub();
console.log(o.ultraProp); // 결과값 : 2
```
      - case3
```js
function Sub(){
var s = new Super();
Sub.prototype = s;

var o = new Sub();
console.log(o.ultraProp); // 결과값 : true
```

## 22. 표준 내장 객체의 확장
   <b>1. 표준 내장 객체란? </b>    
   - 자바스크립트가 기본적으로 가진 객체들을 의미함   
   - Array, Function, Object, Boolean, Number, Math, Data, RegExp   
   <b>2. 사용자 정의 객체 </b>   
   - 사용자가 직접 만든고야    
   <b>3. 배열의 확장</b>   
```js
var arr = new Array('a', 'b', 'c', 'd', 'e',);
function getRandomAlpa(arr){
   var index = Math.floor(arr.length * Math.random()); // 0부터 length값(4)까지.
   return arr[index];
}
console.log(getRandomAlpa(arr));
```
   - 아래와 같이 작성하면 코드의 가독성이 높아지고,   
     인자를 받지않아 사용자가 신경 써야할 게 줄어든다.   
```js
Array.prototype.random = function(){
   var index = Math.floor(this * Math.random()); // this == 배열 객체
   return this[index];
}
var arr = new Array('a', 'b', 'c', 'd', 'e',);
console.log(arr.random());
```
   --- ↑2022.01.09 작성↑ ---    
## 23. object
  <b>1. object란?</b>   
  - object 객체 : 객체의 가장 기본적인 형태를 가지고 있는 객체   

  <b>2. MDN에서 referance 찾아보기</b>   
  - method : ex) object.keys();   
    -> 인자로 결과값 받을 때 : Object.keys(arr)   
       ```js
       여기서 Object는 생성자함수 (object.keys = function(); 
       ```
  - object : ex) objext.prototype.toSyting();   
    -> 인자로 결과값 받을 때 : o.toString();   
    ```js
       여기서 o는
       Object.prototype.tostring = function(){   
   } // 어떤 객체를 생성하고 그 객체의 메소드로써 사용하는 것.   
          ```
  - 
```js
var arr = ["a","b","c"];
console.log('(object.keys(arr)', Object.keys(arr));
Pbject.keys(arr=["0","1","2"]
// 결과값 : undefined

var o = {"name":"egoing","age":20,"city":"seoul"}
o
//결과값 : Object {name: "egoing", age: 20, city: "seoul"}
Pbject.keys(o);
["name","age","city"] // keys : 어떤 객체의 키값만을 수집해서 배열로 만들어 리턴하는 메소드

var o = {};
o.toString(); //결과값: [object Object]

var a = [1,2,3];
a.toString(); //결과값 : 1,2,3

```

## 24. 데이터 타입


## 25. 참조

   --- ↑2022. 1.16  작성↑ --    
   --- ↑2022. 1.5까지 끝내기가 목표↑ ---   
