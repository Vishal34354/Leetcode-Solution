# 2195-time-needed-to-buy-tickets

## Solution

```cpp
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int front=0;
        int max=tickets.size();
        int count=0;
        while(tickets[k]){
       if(tickets[front]>0){
        tickets[front]--;
        count++;
       }
            front=(front+1)%max;
        }
        return count;
    }
};
```
