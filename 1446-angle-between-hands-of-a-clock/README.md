# 1446-angle-between-hands-of-a-clock

## Solution

```cpp
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double temp=hour*30;
        if(hour==12)
        temp=0;
        double ptemp=minutes*5.5;
        ptemp-=temp;
        ptemp=abs(ptemp);
        if(ptemp>180)
        ptemp=360-ptemp;
        return ptemp;
    }
};
```
