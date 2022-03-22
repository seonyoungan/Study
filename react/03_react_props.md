## 1. props를 사용하고 싶은 이유
- 내가 만든 컴포넌트에도   
  html태그처럼 다양한 변화를 주고싶고,,어쩌구,,저쩌구,,   

```jsx
      <Header title="react"></Header>
      {/* 이렇게 하고싶으면 어떻게하지요? */} 
    
```

```jsx
function Header(props){
  return <header>
    <h1><a href="/">react</a></h1>
  </header>
}
```

- {} : 문자열이 아닌 표현식으로 취급되므로 아래처럼 써 도된다.   
```jsx
function Header(props){
  return <header>
    <h1><a href="/">{props.title}</a></h1>
  </header>
}
```

## 2. 동적인 App을 만들기 위해 props사용하기
즉, App에 props를 주고, function에서 props에 영향을 받게끔 만들 수 있다.   

```jsx
function Nav(props){
  console.log('props',props,props.title)
  const lis = []
  for(let i=0; i<props.topics.length; i++){
    let t=props.topics[i];
    lis.push(<li key={t.id}><a href={'/read/'+t.id}>{t.title}</a></li>) 
  }
  return <nav>
      <ol>{lis}</ol>
  </nav>
}

function App() {
  const topics=[
    {id:1, title:'html',body:'html is...'},
    {id:2, title:'css',body:'css is...'},
    {id:3, title:'js',body:'js is...'}
  ]
  return (
    <div>
      <Nav topics={topics}></Nav>
    </div>
  );
}
```
- 동적으로 만들어주는 태그는 key라는 props를 가져야함   
- key props는 반복문 내에서 unique key일 것   
- 미충족시, 아래와 같은 오류가 뜨게 된다.   
  Warning: Each child in a list should have a unique "key" prop.   

  
  



