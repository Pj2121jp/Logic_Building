import java.util.*;
import java.io.*;


public class Program310
{
    public static void main(String arg[]) 
    {
        // create file 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of File : ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);

            int b = fobj.read();

            System.out.println((char)b);  


            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}

