import React, { useState } from 'react';

const Input2 =() =>{
    const [ inputs, setInputs ] = useState({
        name: "",
        email: "",
        tel: ""
    }); 


    const {name, email, tel} = inputs; //오브젝트 분해기법으로 빼놔야 return 내의 value에서 각 값을 쓸 수 있다.

    const onChange = (e) =>{
        const value = e.target.value;
        const id = e.target.id;
        
        // inputs[id] = value; //이것은 상태관리가 안됨
        setInputs({ 
            //깊은 복사를 해서 분해해서 새로운 오브젝트를 만들어야함.
            ...inputs,
            [id]: value //현재 변경되고 있ㅆ는 id값(name, email, tel 값)을 가져와서 업데이트 하는 것            
        });
        
    }
    return (
        <div>
            <div>
                <label>이름</label>
                <input type="text" id="name" value={name} onChange={onChange} />
            </div>

            <div>
                <label>이메일</label>
                <input type="email" id="email" value={email} onChange={onChange} />
            </div>

            <div>
                <label>전화번호</label>
                <input type="tel" id="tel" value={tel} onChange={onChange} />
            </div>
            <br />

            <p>이름: {name}</p>
            <p>이메일: {email}</p>
            <p>전화번호: {tel}</p>
        </div>
    );
};

export default Input2;
