// https://leetcode.com/problems/watering-plants

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int cap=capacity;
        
        for(int i=0;i<plants.size();i++)
        {
            if(plants[i]!=-1&&cap>=plants[i])
            {
                cap-=plants[i];
                plants[i]=-1;
                steps++;
            }
            else if(plants[i]!=-1&cap<plants[i])
            {
                steps+=i;
                cap=capacity;
                i=-1;                
            }
            else if(plants[i]==-1)
            steps++;
            
            
        }
        return steps;
    }
};