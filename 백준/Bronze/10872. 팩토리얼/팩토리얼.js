const input = require('fs').readFileSync('/dev/stdin');

const factorial = (n) => {
    if(n == 0) return 1;
    
    return n * factorial(n - 1);
}

console.log(factorial(input))