class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1 <= n <= 100){
            int digit = n;
            int product = 1;
            while(digit >0){
                product *= (digit%10);
                digit /= 10;
            }    
            if(product % t == 0){
                return n;
            }
            n++;
        }
    }
};