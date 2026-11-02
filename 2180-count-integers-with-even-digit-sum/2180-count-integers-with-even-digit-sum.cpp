class Solution {
public:
    int countEven(int num) {int rem=0;int count=0;int i=1;
        for(int i=1;i<=num;i++){
            int ans=0;
            int temp=i;
            while (temp>0){
                rem=temp%10;
                ans=ans+rem;
                temp/=10;}
                if (ans%2==0){count++;}

            
        }return count;
    }
};