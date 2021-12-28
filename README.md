# HTML-CSS

## 1. CSS정리 <참고 : https://d2.naver.com/helloworld/8540176#ch2>
  * flexbox 생성   
    - flex container (부모속성) : flex-direction, flex-wrap, jutify-content, align-itmes, align-content   
    - flex item (자식속성) : flex, flex-grow, flex-shrink, flex-basis, order   

  <b>1. 스크롤 없는 100% 레이아웃</b>   
  - flex-direction:  column; => 수직정렬, row; : 수평정렬   
  - itme속성 flex: 1;  => flex를 1로 적용해 빈공간을 채우게 한다.   
    - flex-grow => item의 확장 관련 속성 (0, 양의 정수 사용)   
    - 0: container > item이여도 원래 크기 유지.   
    - 1이상: container > flex item이 되면 item의 크기가 container크기에 맞추어 커진다.   

  - flex-shrink => item의 축소 관련 속성 (0, 양의 정수 사용)   
    - 0: container < item이여도 원래 크기 유지   
    - 1이상: container <item이 되면 item의 크기가 container크기에 맞추어 줄어든다.   

  - flex-basis => item의 기본 크기를 결정하는 속성 (기본값: auto)   
    - width속성에서 사용하는 모든 단위(px, % 등)의 속성값 사용가능.   
    - flex-basis 속성의 값을 설정하면 item의 크기가 고정된다.   
    - 단, flex-basis의 값을 0으로 설정할 때는 단위(px, % 등)도 함께 설정해야 한다.   
```css
 .flex_container{
    display: flex; 
    flex-direction: column;
    height: 100%;
}

.flex_itme{
    flex: 1; /*flex: 1 1 0(grow, shrink, basis 순)과 동일한 표현*/
    overflow: auto;
}
```

  <b>2. 내비게이션 영역</b>   
  - GNB(Global navigation bar)에 해당하는 요소, 로그인 버튼을 정렬할 때 사용   
  - margint은..   
    - margin-right: auto => flex item을 오른쪽->왼쪽으로 민다. (바깥여백이 오른쪽 모든 공간을 차지)   
    - margin: 0 auto => flex item이 수평중앙에 위치한다. (바깥여백이 item을 양쪽에서 밀기 때문임)   
    - margin-left: auto => flex item을 왼쪽->오른쪽으로 민다. (바깥여백이 왼쪽의 모든공간 차지)   
    - margin-bottom: auto => flex item을 아래쪽->위쪽으로 민다.   
    - margin: auto 0 => flex item이 수직중앙에 위치한다.   
    - margin-top: auto => flex item을 위쪽->아래쪽으로 민다.   
```css
 .flex_container{
    display: flex; 
}

.flex_itme{
    flex: none; /*flex: 0 0 auto(grow, shrink, basis 순)과 동일한 표현, 크기고정되어야할때*/
}

.flex-item-gnb{
    margin-left: auto; /*오른쪽으로 정렬할 gnb나 로그인 버튼에 해당하는 요소*/
}
```  
  

  <b>3. 브라우저 화면 아래에 붙는 푸터</b>   
  - 푸터는 보통 브라우저 맨 아래에 위치한다.   
  - 콘텐츠의 길이가 화면보다 짧으면, 푸터는 짧아진 만큼 올라간 위치에 표시됨   
```css
 .flex_container{
    display: flex; 
    flex-direction: column;
}

.flex_itme{
    margin-top: auto;
}
``` 

  <b>4. 정렬이 다른 메뉴</b>   
  - 각각 정렬 요소가 다른 레이아웃  
  - justinfy-content: space-between => 속성으로 자식 요소를 일정한 간격으로 정렬함   
    - flex-start(기본값) : 주축의 시작 부분을 기준으로 flex item정렬   
    - center : 주축의 중앙 기준 flex item정렬   
    - flex-end : 주축의 끝부분 기준 flex item정렬   
    - space-around: 주축 기준으로 flex item을 일정한 간격으로 정렬   
    - space-between: 첫번째와 마지막 flex item은 주축의 시작부분과 끝부분에 정렬, 나머지 flex-item을 일정 간격으로 정렬   
    - 
```css
 .flex_container{
    display: flex; 
    justify-content: space-between;
}
``` 
  <b>5. 폼레이블 수직중앙정렬 레이아웃</b>   
  - 폼 요소의 레이블을 수직중앙에 정렬 (align-items: center)   
  - 두줄 이상의 텍스트에도 수직중앙정렬됨   
  - 종류   
    - stretch(기본값): flex-item의 높이를 늘려 flex container의 전체 높이 채움   
    - flex-start: 교차축의 시작부분을 기준으로 flex-item 정렬   
    - center: 교차축의 중앙을 기준으로 flex-item 정렬   
    - baseline: 글꼴 기준선인 baseline을 기준으로 flex-item 정렬   
    - flex-end: 교차축의 끝부분을 기준으로 flex-item 정렬   
```css
 .flex_container{
    display: flex; 
    align-items: center;
}
``` 

  <b>6. 중앙정렬아이콘 레이아웃<b>   
  - 자식요소 아이콘이 부모 요소의 정중앙에 위치   
```css
 /*방법1 */
 .flex_container{
    display: flex; 
    align-items: center; /*수직중앙*/
    justify-content : center; /*수평중앙*/
}
 /*방법2 */  
 .flex_container{
    display: flex; 
}  
 .flex_item{
    margin : auto; 
}  
``` 
  <b>7. 유도너비박스 레이아웃<b>   
  - 부모요소 크기에 따라 자식 요소(flex-item)의 콘텐츠가 줄어든다.   
```css
 .flex_container{
    display: flex; 
}  
 .flex_item{
    /*flex: initial */ /*flex: 0 1 auto(grow, shrink, basis 순)과 동일한 표현(기본값임)*/
    max-width:300px
}  
```   
    
  <b>8. 말줄임과 아이콘<b>   
  - 부모요소(flex container)의 크기가 작아 자식 요소(flex item)의 텍스트를 모두 표시할 수 없을 때 줄임표 나타내게 하는 레이아웃   
  - 이 때 텍스트 영역 옆의 아이콘 크기 고정!
```css
 .flex_container{
    display: inline-flex; 
    max-width: 100% /*flex item인 텍스트 영역의 길이가 유동적으로 변할 수 있게 함-> 텍스트가 아이콘을 제외한 나머지 공간으로 가득 채워짐*/
}  
 .flex_item{
    ` /*flex: 0 1 auto(grow, shrink, basis 순)과 동일한 표현(기본값임)*/
    overflow: hidden;
    text-overflow: ellipsis; /*텍스트 영역이 줄어들 때 나타나는 줄임표*/
    white-space: nowrap;
}  
```
    
  <b>9. 위아래로 흐르는 목록<b>   
  - 위 아래로 흐르는 목록은 자식요소를 위아래로 머저 정렬, 자식요소가 부모요소 벗어나면 줄을 바꿔 다시 위아레로 정렬하는 레이아웃   
```css
 .flex_container{
    display: flex; 
    flex-direction: column; /*수직(위아래)*/
    flex-wrap: wrap; /*flex item이 flex container를 벗어났을 때 줄을 바꾸는 속성. white-space속성과 동일*/
    justfy-content: space-around; /*교차축을 기준으로 flex-item을 일정 간격으로 정렬*/
    align-content: space-around;
}  
    
  <b>10 가로세로비율 유지하는 반응형 박스 레이아웃<b>   
```css
 .flex_container{
    display: flex;
    flex-wrap: wrap;
} 
 .flex_item_list{
    flex-basis: 33.3%; /*목록을 이루는 항목 요소가 일정 비율로 유지되도록 33.3%wjrdyd */
    display: flex;
    flex-direction: column;
}
 .flex_item_image{
    flex: auto /*1 1 auto(grow, shrink, basis)와 같음 */ 
}
```
