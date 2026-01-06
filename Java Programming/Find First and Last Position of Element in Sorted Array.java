import java.util.*;
public class FirstAndLastPosition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        int[] result = findFirstAndLastPosition(nums, target);
        System.out.println(result[0] + " " + result[1]);
    }
    public static int[] findFirstAndLastPosition(int[] nums, int target) {
        int[] result = {-1, -1};
        result[0] = findPosition(nums, target, true);
        if (result[0] != -1) {
            result[1] = findPosition(nums, target, false);
        }
        return result;
    }
    private static int findPosition(int[] nums, int target, boolean isFirst) {
        int left = 0, right = nums.length - 1, position = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                position = mid;
                if (isFirst) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return position;
    }
}
