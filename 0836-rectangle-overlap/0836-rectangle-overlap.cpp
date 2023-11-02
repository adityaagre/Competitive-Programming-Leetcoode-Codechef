class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) 
    {
        
        int x1 = rec1[0];
        int y1 = rec1[1];
        int x2 = rec1[2];
        int y2 = rec1[3];
        
        int a1 = rec2[0];
        int b1 = rec2[1];
        int a2 = rec2[2];
        int b2 = rec2[3];
        
        if((y2==y1) || (x2==x1) || (a1==a2) || (b1==b2))
        {
             // check if either rectangle is actually a line
             // the line cannot have positive overlap
            return false;
        }
       
        if((y1 >= b2) || (y2 <= b1))
        {
            return false;
        }
        
        if((x2<=a1) || (x1 >= a2))
        {
            return false;
        }
        
        return true;
        
    }
    
};