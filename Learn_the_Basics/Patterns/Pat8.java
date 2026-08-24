import java.util.Scanner;

public class Pat8 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();


        //my method - just reverse the row traversing wrt pat7
        // for (int i=n ; i>=1; i--){
        //     for (int k=1; k<=n-i; k++){
        //         System.out.print(" ");
        //     }
        //     for (int k=1; k<=2*i-1; k++){
        //         System.out.print("*");
        //     }
        //     for (int k=1; k<=n-i; k++){
        //         System.out.print(" ");
        //     }
        //     System.out.println();
        // }

        for (int i=1 ; i<=n; i++){
            for (int k=1; k<=i-1; k++){
                System.out.print(" ");
            }
            for (int k=1; k<=2*n-(2*i-1); k++){
                System.out.print("*");
            }
            for (int k=1; k<=i-1; k++){
                System.out.print(" ");
            }
            System.out.println();


        }
    }
}
