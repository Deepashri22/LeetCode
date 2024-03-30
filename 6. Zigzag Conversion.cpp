class Solution {
public:
    string convert(string s, int numRows) {
        string t = "";
        int n = s.length();
        if(numRows == 1) return s;
        int len = 2*numRows - 2;
        while(s.length() % len != 0){
            s.push_back(' ');
        }
        n = s.length();
        vector<string> v;
        for(int i = 0; i < n / len; i++){
            v.push_back(s.substr(len*i, len));
        }
        int n1 = v.size();
        for(int i = 0; i < n1; i++){
            if(v[i][0] != ' ') t.push_back(v[i][0]);
        }
        for(int i = 1; i < numRows - 1; i++){
            for(int j = 0; j < n1; j++){
                if(v[j][i] != ' ') t.push_back(v[j][i]);
                if(v[j][len - i] != ' ') t.push_back(v[j][len - i]);
            }
        }
        for(int i = 0; i < n1; i++){
            if(v[i][len / 2] != ' ') t.push_back(v[i][len/2]);
        }
        return t;
    }
};
