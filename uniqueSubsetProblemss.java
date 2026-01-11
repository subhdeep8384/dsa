import java.util.*;

public class uniqueSubsetProblemss {

    public static void findSubset(int ind, int[] nums, List<Integer> ds, List<List<Integer>> ansList) {
        ansList.add(new ArrayList<>(ds));
        for (int i = ind; i < nums.length; i++) {
            if (i != ind && nums[i] == nums[i - 1]) continue;

            ds.add(nums[i]);
            findSubset(i + 1, nums, ds, ansList); // <-- FIXED HERE
            ds.remove(ds.size() - 1);
        }
    }

    public static List<List<Integer>> subsetwithdup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ansList = new ArrayList<>();
        findSubset(0, nums, new ArrayList<>(), ansList);
        // for(int i = 0 ; i < ansList.size() ; i++){
        //     for(int j = 0 ; j < ansList.get(i).size() ; j++ ){
        //         System.out.println(j + " ");
        //     }
        //     System.out.println("\n");
        // }
        System.out.println(ansList);
        return ansList;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 2, 3, 3};
        subsetwithdup(nums);
    }
}
