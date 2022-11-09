
function compressString(str) {
    let compressedStr = "";
    let count = 0
    
    for (let i = 0; i < str.length; i++) {
        count++
        if (str[i] != str[i + 1]) {
            compressedStr += str[i] + count
            count = 0
        }
    }
    
    return (compressedStr.length > str.length ? str : compressedStr)
}