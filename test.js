const nums = [1, 2, 3, 4, 5];
// nums.forEach((e) => console.log(e*2));
// function forEach(fn){
//     for(let i=0; i<nums.length; i++){
//         fn(nums[i]);
//     }
// }
const result = map((e) => e*2);
console.log(result, nums);
function map(fn){
    let arr = []
    for(let i=0; i<nums.length; i++){
        const val = nums[i];
        const num = fn(val);
        arr.push(num);
    }
    return arr;
}
const grouped = nums.reduce((acc, number) => {
    if(number%2 == 0){
        acc.even.push(number);
    }
    else{
        acc.odd.push(number);
    }
    return acc;
},{odd: [], even: []});