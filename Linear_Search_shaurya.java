// LANGUAGE: Java
// AUTHOR: Shaurya pratap
// GITHUB: https://github.com/itsmeShaurya

// This program is used to find an element in a array using linear search and is very easy to understand.

//Program to check element using linear search
public class Searching {
    public static void main(String[] args) {
        int[] arr = { 3,6,10,5,-1,35,19,-67};
        int target = 19;

        int ans = linearSearch(arr,target);
        System.out.println(ans);
    }

    public static int linearSearch(int[] arr, int target){
        if(arr.length==0){     //If array is empty then return -1
            return -1;
        }

        for(int i=0; i<arr.length;i++){
            if(arr[i]==target){
                return(i);
            }
        }
        return -1;         //If element does not exist
    }
}
