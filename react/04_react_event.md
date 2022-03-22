## 1. 이벤트 기능 넣기
1. 방법   
- 유사 props를 만든다.   
- function부분에서 속성을 이용해 event를 준다.   

2. Header 함수로 예를 들어보자   
- 화면에서 a태크 부분을 클릭하면 function Header(props){...} 부분 실행됨    
- 이때 페이지의 reload가 일어나지 않게 하기 위해서...   
  콜백함수로 들어간 함수가 호출될 때 리액트는 event객체를 첫번째 파라미터로 주입한다.   
```jsx
    <a href="/" onClick={function(event){...}}></a>
```
- event객체: 이벤트 상황을 제어할 수 있는 여러 정보, 기능이 들어있음   
```jsx
    //예-a태그의 기본 동작을 방지하겠다..
    event.preventDefault();
    //a태그의 기본동작이 뭔데? 클릭시 reload되는 것이야
```

```jsx
function Header(props){
  return <header>
    <h1><a href="/" onClick={function(event){
      props.onChangeMode(); 
    }}>{props.title}</a></h1>
  </header>
  //즉, a태그를 클릭하면, onChangeMode가 실행된다.
  //onChange함수는...alert가 뜨는 것이지
}

function App() {
  return (
    <div>
      <Header title="WEB" onChangeMode={function(){
        alert('Header');
        //alert를 띄우도록 함수를 유사 props에 담았어요.
      }}></Header>
  );
}
```

* arrow function도 쓸 수 있다.   
```jsx
<h1><a href="/" onClick={(event)=>{props.onChangeMode();}}>hello</a></h1>
```

3. Nav 함수로 예를 들어보자     
- 각 li들을 클릭하면 alert가 뜨게 할 것   

- a태그에서 id를 생성하는 방법 중 하나는 아래와 같다.   
```jsx
<a id={t.id}> </a>
```

-이벤트를 유발시킨 타겟을 가져옴   
```jsx
    props.onChangeMode(event.target.id);
```

```jsx
function Nav(props){
  console.log('props',props,props.title)
  const lis = []
  for(let i=0; i<props.topics.length; i++){
    let t=props.topics[i];
    lis.push(<li key={t.id}>
      <a id={t.id} href={'/read/'+t.id} onClick={event=>{
        event.preventDefault();
        props.onChangeMode(event.target.id);

      }}>{t.title}</a>
      </li>)
  }
  return <nav>
      <ol>{lis}</ol>
  </nav>
}

function App() {

  return (
    <div>
    {*alert를 띄우도록 함수를 유사 props에 담았어요.
    그런데 이제 함수의 첫번째 파라미터 값으로 id값을 가져오는..
    그리고 id값이 경고창에 띄워지는...*}
      <Nav topics={topics} onChangeMode={(id)=>{
        alert(id);
      }}></Nav>
    </div>
  );
}
```
