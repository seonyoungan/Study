import React, { useState } from 'react';

// 컴포넌트에서 동적인값: state. state를 처리할 수 있는 usestate라는 함수로 관리할 수 있다.
// 상태관리 : usestate 
const Counter =() =>{
    const [ num, setNum ] = useState(0);  // num과 setNum은 0이라는 기본값을 가진다. 여기서 setNum은 setter함수로서 상태를 관리하기 위해 선언된 것이다.
    // 증가함수
    const increase = () => {
        setNum(num+1);
        // num = num + 1의 의미와 같음. setNum에서 상태관리하기위함
    };
    // 감소함수
    const decrease = () => {
        setNum(num-1);
    };

    return (
        <div>
            <button onClick={increase}>+1</button>
            <button onClick={decrease}>-1</button>
            <p>{num}</p> 
        </div>
    );
};

export default Counter;