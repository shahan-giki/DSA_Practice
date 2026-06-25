#include<iostream>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int num:arr){
            freq[num]++;
        }
        unordered_set<int> occurrences;
                for (auto& pair : freq) {
            if (occurrences.count(pair.second)) {
                return false;
            }
            occurrences.insert(pair.second);
        }

        return true;
    }
};
    