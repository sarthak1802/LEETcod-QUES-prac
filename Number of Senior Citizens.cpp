//Number of Senior Citizens
class Solution {
public:
    int countSeniors(vector<string>& d) {
        int ans = 0;
        for(string&e: d){
            string s = e.substr(11,2);
            int age = stoi(s);
            if(age > 60) ans++;
        }
        return ans;
    }
};
