class Duplicates {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;
        
        int j = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }

    public static void main(String[] args) {
        Duplicates obj = new Duplicates();
        int[] nums = {1, 1, 2, 2, 3, 4, 4, 5};
        int len = obj.removeDuplicates(nums);
        System.out.println("Length after removing duplicates: " + len);
        for (int i = 0; i < len; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
