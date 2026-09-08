import java.util.Scanner;

public class Pat22 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        
        
       
        for (int i=1; i<=n; i++){
            for (int j=n; j>=n-i+1; j--){
                System.out.print(j+" ");
            }
            for (int j=1 ; j<=2*(n-i);j++){
                System.out.print((n-i+1)+" ");
            }
            for(int j=n-i+2; j<=n; j++){
                System.out.print(j+ " ");
            }
            System.out.println();

        }

        //lower half
        for (int i=n-1; i>=1; i--){
            for (int j=n; j>=n-i+1; j--){
                System.out.print(j+ " ");
            }
            for (int j=1; j<=2*(n-i); j++){
                System.out.print((n-i+1)+" ");
            }
            for (int j=n-i+2; j<=n; j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
        

        
        
    }
    
}
