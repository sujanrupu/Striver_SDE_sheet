//Link: https://leetcode.com/problems/compare-version-numbers/description/

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int c=0;
        deque<int> v1, v2;
        for(int i=0; i<version1.size(); ++i){
            if(version1[i]=='.') v1.push_back(c), c=0;
            else c = (c*10) + (version1[i]-'0');
        }
        if(c>0) v1.push_back(c);
        c=0;
        for(int i=0; i<version2.size(); ++i){
            if(version2[i]=='.') v2.push_back(c), c=0;
            else c = (c*10) + (version2[i]-'0');
        }
        if(c>0) v2.push_back(c);     
        while(v1.size() and v1.back()==0) v1.pop_back();
        while(v2.size() and v2.back()==0) v2.pop_back();
               
        while(v1.size() and v2.size()){
            if(v1.front()==v2.front()) v1.pop_front(), v2.pop_front();
            else if(v1.front() > v2.front()) return 1;
            else return -1;
        }
        if(v1.size()) return 1;
        else if(v2.size()) return -1;
        return 0;
    }
};
