import java.util.Scanner;

public class Pat16 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        
        

        //METHOD 1: MY WAY
        // for (int i=1; i<=n; i++){
            
        //     for (int j=1 ; j<=i; j++){
        //         System.out.print((char)(64+i));
                
        //     }
        //     System.out.println();
           
            
        // }

        //METHOD 2

        for (char c='A'; c<'A'+n; c++){
            for (int j=1; j<=c-64; j++){
                System.out.print(c);
            }
            System.out.println();
        }
        
    }
    
}
