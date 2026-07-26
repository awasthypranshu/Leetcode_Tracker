// Last updated: 26/07/2026, 22:04:36
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (string op : operations) {
            if (op == "C") {
                record.pop_back();
            } 
            else if (op == "D") {
                record.push_back(record.back() * 2);
            } 
            else if (op == "+") {
                int n = record.size();
                record.push_back(record[n-1] + record[n-2]);
            } 
            else {
                record.push_back(stoi(op));
            }
        }
        int total = 0;
        for (int score : record)
            total += score;
        return total;
    }
};
