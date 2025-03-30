const input = require('fs')
                .readFileSync('/dev/stdin')
                .toString()
                .trim()
                .split('\n');

let solution = (input) => {
    let n = parseInt(input[0])
    
    // 진짜 약수들을 정수로 변환
    let arr = input[1].split(' ').map(el => parseInt(el))
    console.log(Math.min(...arr) * Math.max(...arr))
}

solution(input)