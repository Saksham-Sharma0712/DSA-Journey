class Solution {
  public:
    bool armstrongNumber(int n) {
        int arm_no =0;
        int num = n;
        while(n > 0){
            int lastD = n % 10;
            arm_no+= (lastD*lastD*lastD);
            n/=10;
        }
        if(arm_no == num){
            return true;
        }
        else{
            return false;
        }
    }
};
