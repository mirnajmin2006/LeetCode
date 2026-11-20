class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0 = 0, count1 = 0;

        for(int x : students) {
            if(x == 0) count0++;
            else count1++;
        }

        for(int x : sandwiches) {
            if(x == 0 && count0 > 0) count0--;
            else if(x == 1 && count1 > 0) count1--;
            else break;
        }

        return count0 + count1;
    }
};