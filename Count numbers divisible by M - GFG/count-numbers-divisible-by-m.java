//{ Driver Code Starts
//Initial Template for Java
import java.util.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String[] S = new String[3];
            S = read.readLine().split(" ");
            int A = Integer.parseInt(S[0]);
            int B = Integer.parseInt(S[1]);
            int M = Integer.parseInt(S[2]);
            Solution ob = new Solution();

            System.out.println(ob.countDivisibles(A, B, M));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution {
    static int countDivisibles(int A, int B, int M){
        // code here
         return B/M-(A-1)/M;
    }
}