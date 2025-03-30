const input = require('fs').readFileSync('dev/stdin').toString().trim().split(' ').map(el => parseInt(el))

let fac = (n) => {
    let res = 1
    for(let i = 1; i <= n; i++){
        res *= i
    }
    
    return res
}

console.log(fac(input[0]) / (fac(input[1]) * fac(input[0]-input[1])))