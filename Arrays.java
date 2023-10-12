import java.util.Scanner;
public class Arrays{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        //1 Arrays define
        // System.out.print("Enter the size: ");
        // int size=sc.nextInt();
        // int marks[]=new int [size];
        // //input
        // for(int i=0;i<size;i++){
        //     marks[i]=sc.nextInt();
        // }
        // //output
        // for(int j=0;j<size;j++){
        //     System.out.println(marks[j]);
        // }


        // //2 Array define
        // int score[]={1,3,4};
        // for(int i=0;i<score.length;i++){
        //     System.out.println(score[i]);
        // }


        System.out.print("Enter the size: ");
        int size=sc.nextInt();
        int duration[]=new int[size];
        System.out.println("Enter the values: ");
        for(int i=0;i<size;i++){
            duration[i]=sc.nextInt();
        }
        System.out.print("Enter value to search: ");
        int val=sc.nextInt();
        for(int j=0;j<size;j++){
            if(duration[j]==val){
                System.out.println("Index value is: "+j);
            }
        }

        
    }
}