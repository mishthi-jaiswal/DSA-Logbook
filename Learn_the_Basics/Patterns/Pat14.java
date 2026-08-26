import java.util.Scanner;

public class Pat14 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        
        

        
        for (int i=1; i<=n; i++){
            
            // for (int j=1 ; j<=i; j++){
            //     System.out.print((char)(64+j));
            // }

            for (char c='A'; c<'A'+i; c++){
                System.out.print(c);
            }
            System.out.println();
           
            
        }
        
    }
    
}
