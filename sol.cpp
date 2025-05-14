class Solution {
    public:
        int integerReplacement(int n) {
            // using the brute force solution
    
    
            long long num  = n;
    
              int count = 0;
            while(num>1){
              
              if(num  % 2 == 0){
                num = num/2;
              }
              else{
              
              if(( num + 1 )%4 == 0 && num != 3){
                num += 1;
              }
              else{
    
               num -= 1;
    
              }
              }
              count++;
    
            }
    
    
    
         return count;
        }
    };