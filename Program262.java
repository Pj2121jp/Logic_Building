import java.util.*;

public class Program262 
{
    public static void main(String args[]) 
    {   
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;

        System.out.println("Enter number :");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo%2;
            iNo = iNo/2;

            System.out.println(iDigit);
        }
        System.out.println();

    }
}