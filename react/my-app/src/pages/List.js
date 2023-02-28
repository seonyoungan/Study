import React from 'react';

const User = ({userData}) =>{
    return (
        <tr>
            <td>{userData.name}</td>
            <td>{userData.email}</td>
        </tr>
    );
};
const UserList = () =>{
    const users = [
        {email: 'user1@gmail.com', name: '떡볶이'},
        {email: 'user2@gmail.com', name: '컵라면'},
        {email: 'user3@gmail.com', name: '김말이'},
        {email: 'user4@gmail.com', name: '군만두'}
        
    ];

    //table태그로 만들기
    return (
        <table>
            <thead>
                <tr>
                    <th>이름</th>
                    <th>이메일</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    {/* map함수를 통해서 함수의 속성을 주고받기 가능 */}
                    {users.map(user => <User userData = {user} />)}  {/* User함수를 가지고 행을 만들도록.. */}
                </tr>
            </tbody>
        </table>
    );
};

export default UserList;