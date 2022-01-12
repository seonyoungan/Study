document.write("1.변수 x가 10보다 크고 20보다 작을 때 변수 x를 출력하는 조건식을 완성하라 <br />");
    var x = 15;
    if (x>10 && x <20){
        document.write('x값은 '+x+' 입니다.<br />');
    } else{
        document.write('x의 값은 10보다 크고 20보다 작은 수로 입력하세요. <br />');
    }

document.write("2. for문을 사용하여 0부터 10미만의 정수 중에서 짝수만을 작은 수부터 출력하시오. <br />");
for(var a=0; a <10; a++){
    if (a % 2 == 0){
        document.write(a + ' ');
    }
}
document.write(' <br />');

document.write("3. for문을 사용하여 0부터 10미만의 정수 중에서 짝수만을 작은 수부터 문자열로 출력하시오. <br />");
for(var b=0; b < 10; b++){
    if (b % 2 == 0){
        document.write(string(b) + ' ');
    }
}
document.write("4. for문을 사용하여 0부터 10미만의 정수 중에서 홀수만을 큰수부터 출력하시오. <br />");
for(var c=9; (c >=0 && c<=9); c--){
    if (c % 2 == 1){
        document.write(c + '< br/>');
    }
}

document.write("5. while문을 사용하여 0 부터 10 미만의 정수 중에서 짝수만을 작은 수부터 출력하시오. <br />");
var d = 0;
while(d < 10){
    if (d % 2 == 0){
        document.write(d + '< br/>');
        d++;
    }
}

document.write("6. while문을 사용하여 0 부터 10 미만의 정수 중에서 홀수만을 큰수부터 출력하시오. <br />");
var e = 9;
while(e >= 0){
    if (e % 2 == 1){
        document.write(e + '< br/>');
        e--;
    }
}

document.write("7. for 문을 사용하여 0부터 10미만의 정수의 합을 출력하시오. <br />");
var sum = 0;
for(var f=0; f<10; f++){
    sum += f;
} 
document.write(sum + '< br/>');

document.write("8. 1부터 20 미만의 정수 중에서 2 또는 3의 배수가 아닌 수의 총합을 구하시오. <br />");
var sum2=0;
for(var g=1;g<20;g++){
    if(g % 2 == 0 || g % 3 ==0){
        continue;
    } else{
        sum2 += g;
    }
}
document.write(sum2 + '< br/>');

document.write("9. 1부터 20 미만의 정수 중에서 2 또는 3의 배수인 수의 총합을 구하시오. <br />");
var sum3=0;
for(var h=1;h<20;h++){
    if(h % 2 == 0 || h % 3 ==0){
        sum3 += h;
    }
}
document.write(sum3 + '< br/>');

document.write("10. 두 개의 주사위를 던졌을 때, 눈의 합이 6이 되는 모든 경우의 수를 출력하시오. <br />");

for (var i; i<=6; i++){
    for(var j;j<=6;j++){
        if (i+j === 6){
            document.write([i,j]);
        }
    }
}