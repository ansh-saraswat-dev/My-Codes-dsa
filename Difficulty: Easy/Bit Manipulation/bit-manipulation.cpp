class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int getbit=(num >> (i-1)) & 1 ;
        int setbit=(num | (1<<i-1)); 
        int clearbit=num & ~(1<<i-1);
        cout<<getbit<<" "<<setbit<<" "<<clearbit;
    }
};