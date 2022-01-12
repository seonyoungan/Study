var game = ["Rock","Scissor","Papper"];

function getRockScissorPapper(){
    var i = Math.floor(3*Math.random()); // Math.floow쓰는 이유 : 소수점이하 버림
    console.log(game[i]);
}

getRockScissorPapper();