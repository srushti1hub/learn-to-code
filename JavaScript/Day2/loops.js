/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let arr = ["a","e","i","o","u"];
    for( let v of s)
    {
        if(arr.includes(v)){
            console.log(v);
        }
    }
    for( let v of s)
    {
        if(! arr.includes(v)){
            console.log(v);
        }
    }
}


