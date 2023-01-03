function countK(){
    var k=0;
    for(var i=0;i<s.length;i++){
        if (s[i][0] == "김"){
            k++;
        }
    }
    return '김씨 : ' + k + '명';
}

function countL(){
    var l=0;
    for(var m=0;m<s.length;m++){
        if (s[m][0] == "이"){
            l++;
        }
    }
    return '이씨 : ' + l + '명';
}


function countLjy(){
    var ljy = 0;
    for(var j=0;j<s.length;j++){
        if (s[j] == '이재영'){
            ljy++;
        }
    }
    return '이재영씨: '+ljy + '명';
}

function remove(){
    var only=[]; // 비어있는 배열 생성
    for (var k=0;k<s.length;k++){
        var only_cnt=0;
        for (var l=0;l<s.length;l++){
            if (s[k]===s[l]){
                only_cnt++; 
        }
    }
        if(only_cnt < 2){
            only.push(s[k]);
        }    
    }
    return only;
}
function sort(){
    return remove().sort();
}

var s = [
    '이유덕','이재영','권종표','이재영','박민호','강상희',
    '이재영','김지완','최승혁','이성연','박영서','박민호',
    '전경현','송정환','김재성','이유덕','전경헌'
];

console.log(countK(s));
console.log(countL(s));
console.log(countLjy(s));
console.log(remove(s));
console.log(sort(s));