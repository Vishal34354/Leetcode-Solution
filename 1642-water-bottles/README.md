# 1642-water-bottles

## Solution

```cpp
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
     int full=numBottles;
    //  int empty=1;
     int count=0;
     while(full){
        count=count+full;
        full=numBottles/numExchange;
        numBottles=numBottles-(full*numExchange)+full;
     }
     return count;
    }
};
```
