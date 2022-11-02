class Solution {
public:
    
    int minMutation(string start, string end, vector<string>& bank) {
       
        queue<string> q;
        // a hash map to store if we've visited a node
        unordered_map<string, int> vis;
        // distance
        int steps = 0;
        // we start from gene string `start` as a starting point
        // push it to the queue
        q.push(start);
        // and mark it visited
        vis[start] = 1;
        // BFS
        while (!q.empty()) {
            
            for (int i = q.size(); i > 0; i--) {
                // get the gene string from the queue
                string s = q.front();
                q.pop();
                // if it is same as `end`, that means we found the answer
                if (s == end) return steps;
                // otherwise, given a gene string with 8-character long
                // we can replace each character with "A", "C", "G" and "T" (i.e. mutate)
                for (int j = 0; j < 8; j++) {
                 
                    char oc = s[j];
             
                    for (int k = 0; k < 4; k++) {
            
                        s[j] = "ACGT"[k];
                       
                        if (!vis[s] && find(bank.begin(), bank.end(), s) != bank.end()) {
                            // push the next node to the queue
                            q.push(s);
                            // and mark it visited
                            vis[s] = 1;
                        }
                    }
                 
                    s[j] = oc;
                }
            }

            steps += 1;
        }
   
        return -1;
    }
};