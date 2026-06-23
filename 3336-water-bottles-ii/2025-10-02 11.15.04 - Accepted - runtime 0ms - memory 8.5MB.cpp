class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full=numBottles;
        int empty=0;
        int count=0;
        while(full>0){
            if(empty<numExchange || empty==0){
                count=count+full;
                empty=full+empty;
                full=0;
            }
            if(empty<numExchange)
            break;
            empty=empty-numExchange;
            numExchange++;
            full++;
        }
    return count;
    }
};