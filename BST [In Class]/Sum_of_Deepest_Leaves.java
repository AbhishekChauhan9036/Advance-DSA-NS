/*
class Node{
    int data;
    Node left;
    Node right;
  
    Node(int data){
        this.data = data;
        left=null;
        right=null;
       
    }
}
*/


 public static int deepestLeavesSum(Node root) {
    Map<Integer, Integer> map = new HashMap<>();
    helper(root, 0, map);
    return map.getOrDefault(
      map.keySet().stream().mapToInt(Integer::valueOf).max().orElse(0), 0
    );
  }
  
  private static void helper(Node root, int currLevel, Map<Integer, Integer> map) {
    if (root == null) {
      return;
    }
    map.put(currLevel, map.getOrDefault(currLevel, 0) + root.data);
    helper(root.left, currLevel + 1, map);
    helper(root.right, currLevel + 1, map);
  }