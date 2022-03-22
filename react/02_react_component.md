## 1. 컴포넌트를 만드는 이유
- 코드가 길어질수록 복잡해짐 정리정돈이 하고싶다..(그룹핑)   
- 하나의 태그로 이름을 붙여 사용자 정의태그(=컴포넌트) 만들기   

## 2. 컴포넌트: function으로 만든다.
- 함수는 반드시 대문자로 시작   
- 부품화를 할 수 있어서 생산성이 높아짐   
```jsx
import logo from './logo.svg';
import './App.css';

function Header(){  {/* 여기서 생성 */} 
  return <header>
    <h1><a href="/">react</a></h1>
  </header>
}

function App() {
  return (
    <div>
      <Header></Header> {/* 여기서 사용 */} 
      <Header></Header>
    </div>
  );
}

export default App;
```