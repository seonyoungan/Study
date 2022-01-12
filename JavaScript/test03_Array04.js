var studentNames = ["쟈니", "태일", "쇼타로", "정우", "런쥔", "마크", "유타", "윈윈", "재현", "지성"];

function helloStudents(arr){
    for (var i =arr.length-1; i>=0;i--){
        console.log(arr[i]+'님 안녕하세요.<br>');
    }
}
helloStudents(studentNames);
