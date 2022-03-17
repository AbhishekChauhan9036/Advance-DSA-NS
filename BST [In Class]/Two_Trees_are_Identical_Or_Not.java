/*
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
*/
public static boolean isIdentical(Node r1, Node r2)
{
           // Your code here
          // return true or false if both trees are identical or not


    if(r1 == null && r2 ==null)
        return true;
    else
    {
        if(r1!= null && r2 != null)
            return r1.data == r2.data &&
        isIdentical(r1.left, r2.left) &&
        isIdentical(r1.right, r2.right);
    }
    return false;
}