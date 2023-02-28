import React, { useState } from 'react';

const Input =() =>{
    const [ textValue, setTextValue ] = useState("");

    const onChange=(e) => {
        setTextValue(e.target.value);
    };

    return (
        <div>
            <input type="text" value={textValue} onChange={onChange} /> {/* 실제 동작하도록 기능구현 */}
            <br />
            <p>{textValue}</p> {/* 화면상 결과 출력 */}
            
        </div>
    );
};

export default Input;