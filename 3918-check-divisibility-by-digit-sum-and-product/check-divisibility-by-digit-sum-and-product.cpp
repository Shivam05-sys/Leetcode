class Solution {
public:
    int sum(int n){
        int sum = 0;
        while(n>0){
            int dig = n%10;
            n/= 10;
            sum += dig;
        }
        return sum;
    }
    int product(int n){
        int product = 1;
        while(n >0){
            int dig = n%10;
            n/= 10;
            product *= dig;
        }
        return product;
    }
    bool checkDivisibility(int n) {
        int ans = sum(n)+product(n);
        return ((n%ans == 0) ? true : false);
    }
};