import java.util.Scanner;

public class Pat11 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        

        int r= 1;
        for (int i=1; i<=n; i++){
            int start = r;
            for (int j=1 ; j<=i; j++){
                System.out.print(start +" ");
                start^=1;
            }
            System.out.println();
            r^=1;
            
        }
        
    }
    
}
