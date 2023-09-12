class Solution {
public:
    int minDeletions(string s) {
        int n = s.length();

        unordered_map<char, int> charFreq;
        for(int i = 0; i < n; i++){
            charFreq[s[i]]++;
        }

        unordered_set<int> freqSet;
        int count = 0;
        for(auto& p : charFreq){
            if(freqSet.find(p.second) == freqSet.end()){
                freqSet.insert(p.second);
            }else{
                while(freqSet.find(p.second) != freqSet.end()){
                    count++;
                    p.second--;
                }
                if(p.second > 0){
                    freqSet.insert(p.second);
                }
                
            }
        }

        return count;
    }
};