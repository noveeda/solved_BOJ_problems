const input = require('fs').readFileSync("/dev/stdin").toString().trim().split("\n");

let solution = (input) => {

    for(let i = 0; i < input.length; i++){
        let digit = 1
        let temp = 0;
        let n = parseInt(input[i])
        
        while(true){
            temp = temp * 10 + 1
            temp %= n
            if(temp == 0){
                console.log(digit)
                break;
            }
            
            digit++
        }
    }
}

solution(input)
