import java.util.Scanner;

public class Pat9 {
        public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();


        //increasing pattern
        for (int i=1; i<=n; i++){
            for (int k=1; k<=n-i; k++){
                System.out.print(" ");
            }
            for (int k=1; k<=2*i-1; k++){
                System.out.print("*");
            }
            for (int k=1; k<=n-i; k++){
                System.out.print(" ");
            }
            System.out.println();
        }
        //decreasing pattern
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
