#include <stdio.h>
int findPosition(int nums[], int n, int t) {
    int left = 0, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < t) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}
int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int n, t;
        scanf("%d %d", &n, &t);
        int nums[100000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        int position = findPosition(nums, n, t);
        printf("%d
", position);
    }
    return 0;
}
