## 1. state의 개념
1. `state` : component    
- component는 입력과 출력이 있다.   
- component의 입력: `prop` / 출력: `return`  
- `state`: prop과 마찬가지로 component함수를 다시 실행시켜 새로운 return값을 만드는 data    

2. prop과 state의 비교  
- 공통점   
  값이 변경되면 새로운 return 값을 만들고 UI를 바꾼다.   
- 차이점   
  `prop`: 컴포넌트를 사용하는 외부자를 위한 data   
  `state`: 컴포넌트를 만드는 내부자를 위한 data   

## 2. state 사용법
- 아래의 훅은 리액트에서 제공하는 기본적인 함수이다.  
```jsx
  import {useState} from 'react'
```   

- App함수 내의 변수를 상태로 만듦   
```jsx
  hello = useState('어쩌구');
```

- 상태를 바꿀 수 있도록,, 선언   
  0번째원소: 값을 읽을 때 쓰는 데이터   
  1번째원소: 상태의 값을 변경할 때 사용하는 함수   
```jsx

  const [mode, setMode] = useState('WELCOME');
  /* console.log('_mode', _mode);
  const _mode = useState('WELCOME');
  // 0번째원소: WELCOME, 1번째원소: 함수 찍힘 */


  ```