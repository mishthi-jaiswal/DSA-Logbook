import java.util.Scanner;

public class Pat10 {
        public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();


        //increasing pattern
        for (int i=1; i<=n; i++){
            for (int j=1 ; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();

            
        }
        //decreasing pattern
        for (int i=n-1 ; i>=1; i--){
            for (int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
   
    
}
