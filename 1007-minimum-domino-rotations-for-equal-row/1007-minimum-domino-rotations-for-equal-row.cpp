class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        
        
        vector<int> faceA(7), faceB(7), same(7);
        
        for(int i = 0; i < n; ++i)
        {
            faceA[tops[i]]++;
            faceB[bottoms[i]]++;
            
            if(tops[i] == bottoms[i])
                same[tops[i]]++;
        }
        
        int minRotation = INT_MAX;
        
		// all possibilities from 1 to 6
        for(int i = 1; i<=6; ++i)
        {
            if(faceA[i] + faceB[i] - same[i] == n) // if this can be done then rotations can be done
                minRotation = min(minRotation , min(faceA[i],faceB[i]) - same[i]);
        }
        
        return minRotation == INT_MAX ? -1 : minRotation;
        
    }
};