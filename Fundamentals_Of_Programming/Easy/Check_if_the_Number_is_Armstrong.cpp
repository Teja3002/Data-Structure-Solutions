class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int num = n;
        int count = 0;

        int temp = n;

        while (temp > 0) {
            count++;
            temp = temp / 10;
        }

        temp = n;