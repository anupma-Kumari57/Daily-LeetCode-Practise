class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity == 0)
        {
            return true;
        }
        if(targetCapacity > jug1Capacity + jug2Capacity)
        {
            return false;
        }
        else
        {
            int gcd_j1j2 = gcd(jug1Capacity,jug2Capacity);
            return targetCapacity % gcd_j1j2 == 0;
        }
    }
};