import java.util.*;

class program261 
{
    public static void main(String args[]) throws Exception
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