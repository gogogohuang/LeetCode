/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    var FzBz=[];
    var str="";
    for(i=1; i<=n; i++){
        if(i%3===0){
            str+="Fizz";
            if(i%5===0){
                str+="Buzz";
            }
        }else if(i%5===0){
            str+="Buzz";
        }else{
            str+=i;
        }
        FzBz.push(str);
        str="";
    }
    return FzBz;
};