import java.util.Scanner;

public class Pat12 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        int x= 2*n; //no of columns
        

        
        for (int i=1; i<=n; i++){
            
            for (int j=1 ; j<=i; j++){
                System.out.print(j);
                
            }
            for (int j=i+1; j<=x-i; j++){
                System.out.print(" ");
            }
            // for (int j =x-i+1; j<=x; j++){
            //     System.out.print(x-j+1);
            // }

            for (int j=i; j>=1; j--){
                System.out.print(j);
            }
            System.out.println();
            
        }
        
    }
    
}
