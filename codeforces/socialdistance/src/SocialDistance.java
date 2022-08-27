import java.util.Scanner;

public class SocialDistance {
    static void swap(int[] arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    static int partition(int[] arr, int low, int high)
    {
        int pivot = arr[high];
        int i = (low - 1);
        for(int j = low; j <= high - 1; j++)
        {
            if (arr[j] > pivot)
            {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }
    static void quickSort(int[] arr, int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int testcase= sc.nextInt();
        while(testcase!=0){
            int n= sc.nextInt(),m= sc.nextInt(), emptyChair[]=new int[n],x=0,z=0;
            for (int i=0;i<n;i++){
                emptyChair[i]= sc.nextInt();
            }
            quickSort(emptyChair, 0, n - 1);
            for (int i=0;i<n;i++){
                if(i==0){
                    x=x+emptyChair[i]*2+1;
                }
                else {
                    x=x+emptyChair[i]+1;
                }

                if(x>m){
                    x=x-emptyChair[i];
                    if(x>m){
                        z=1;
                        System.out.println("NO");
                        break;
                    }
                    else {
                        x=x+emptyChair[i];
                    }
                }
            }
            if(z==0){
                System.out.println("YES");
            }
            testcase--;
        }

    }
}
