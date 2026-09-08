import java.util.Scanner;

public class Pat18 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        
        

        
        for (int i=1; i<=n; i++){
            
            for (int j=n-i+1 ; j<=n; j++){
                System.out.print((char)(64+j)+" ");
                
            }
            System.out.println();

            
        }
           
            
        
        
    }
    
}
