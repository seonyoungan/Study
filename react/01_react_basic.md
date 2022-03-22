## 1. basic  
1. creact-react-app으로 리액트 프로젝트 생성   
  npm init react-app <폴더이름>   
  또는 VS Code로 열고 터미널에서   
  npm init react-app .  

   
2. 개발모드   
  - 실행하기: npm run start   
  : 브라우저가 켜짐 (http://localhost:3000/)   
  : 새로고침을 하지 않아도 코드를 고치고 저장하면 바로바로 반영됨   
  
  - 종료하기: ctrl+c   


## 2. 리액트 특징   
1. Independent Component   
  UI를 여러 컴포넌트로 쪼개어 만든다.   
  한 페이지 내의 여러가지 독립된 컴포넌트 생성(버튼, 표 등) -> 조립 -> 화면 구성   
  앱이 복잡해지더라도 유지 보수에 용이하다는 장점을 가짐   
2. One-way data flow   
  데이터의 방향: 단방향(규모가 커져도 데이터 흐름 추적 용이) <-> 양방향(규모 커지면 데이터 흐름 추적 불편)    
  양방향 데이터 플로우에 비해 코드의 양이 많아진다는 단점이 있지만.. 리액트는 VDOM으로 보완할 수 있음   
  
3. VDOM   
  DOM: 코드 내의 원하는 위치에 접근하기 위한 방식   
  VDOM: 가상의 DOM으로, 변경사항이 있으면 전체가 아닌 해당 부분만 실제 DOM에 반영하는 방식으로 작업 수행됨   
        그 결과, 브라우저 리소스 최소화, 효율성과 속도를 높임   
        
  *참고로 TypeScript도 React에서 사용할 수 있다.    
  

## 3. 기본 수정
index.js : 입구파일 (npm start를 이용해 creact app을 구동시키면, index.js파일을 찾고 그대로 동작한다.   
App.js : UI전체   
 - from './App';
index.html: id가 root인 태그가 있다. 
```jsx
ReactDOM.render(
  <React.StrictMode>
    <App />
  </React.StrictMode>,
  document.getElementById('root')
);
```

## 3. 기본 배포
  - 배포파일: npm run build    
  - 빌드 명령 실행시, serve -s build (serve라는 앱(웹서버)을 쓰는 걸 추천함.)   
    ->사용자가 어떤 경로로 들어오든지 간에,, html파일을 서비스해줌   
  - serve : nodejs로 만들어짐   
