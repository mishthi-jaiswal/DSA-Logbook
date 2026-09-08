import java.util.Scanner;

public class Pat11 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the no :");
        int n= sc.nextInt();
        
        //METHOD 1: MY METHOD 
        // int r= 1;
        // for (int i=1; i<=n; i++){
        //     int start = r;
        //     for (int j=1 ; j<=i; j++){
        //         System.out.print(start +" ");
        //         start^=1;
        //     }
        //     System.out.println();
        //     r^=1;
            
        // }


        //METHOD 2: STRIVER'S METHOD

        //even i starts with 0 and odd i starts with 1
        int start;
        for (int i=1; i<=n; i++){
            if (i%2==0){
                start= 0;
            }
            else{
                start=1;
            }
            for (int j=1; j<=i; j++){
                System.out.print(start);
                start=1-start;  //1-0=1 and 1-1=0
            }
            System.out.println();
        }
        
    }
    
}
