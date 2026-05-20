class Solution {
public:
    int countOddDigit(int n) {
      
        int oddnum=0;
while (n>0){
    int num=n%10;
    if(num%2!=0){
         oddnum++;
    } 
    n=n / 10;
}
return oddnum;
    }
};