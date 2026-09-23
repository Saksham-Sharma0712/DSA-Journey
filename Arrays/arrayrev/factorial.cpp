class Solution {
  public:
    int factorial(int n) {
        int fact =1;
        for(int i = n;i >= 1;i--){
            fact*=i;
        }
        return fact;
    }
};
