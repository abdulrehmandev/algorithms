// checks if strings are equal with only one edit
function oneAway (str1, str2) {
    
    // checks if strings only need on replace or not
    function oneReplace(str1, str2) {
        let oneEdit = false
        
        for (let i in str1) {
            if (str1[i] != str2[i]) {
                if (oneEdit) return false
                oneEdit = true
            }
        }
        return true
    }
    
    // checking if smaller string can become equal using only one added char
    function oneInsert(str1, str2) {   
        if (str1.length < str2.length) {
            let temp = str1
            str1 = str2
            str2 = temp
        }
        
        let index1 = 0,
        index2 = 0
        
        while (index1 < str1.length && index2 < str2.length) {
            if (str1[index1] != str2[index2]) {
                if (index1 != index2) return false
                index1++
            } 
            else {
                index1++
                index2++
            }
        }
        return true
    }
        
    if (str1.length === str2.length) {
        return oneReplace(str1, str2)
    }
    else if (str1.length === str2.length + 1 || str1.length === str2.length - 1) {
        return oneInsert(str1, str2)
    }
    else {
        return false
    }    
}