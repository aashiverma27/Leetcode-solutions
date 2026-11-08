class Solution {
public:
    int countSymmetricIntegers(int low, int high) {int count=0;
        for(int i=low;i<=high;i++){if(i>=10&&i<=99){
            if(i%11==0){count++;}}
                else if(i>=1000&&i<=9999)
                {int firsthalf=i/100;
                int secondhalf=i%100;
                int sum1=(firsthalf/10)+(firsthalf%10);
                int sum2=(secondhalf/10)+(secondhalf%10);
                if (sum1==sum2){count++;}}
            
        }return count;
        
    }
};