import java.util.*;
import java.io.*;


public class Program306
{
    public static void main(String arg[]) 
    {
        // create file 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of File : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bret = false;

            bret = fobj.exists();

            if(bret)
            {
                System.out.println("Name of file is : "+fobj.getName());
                System.out.println("Absolute path of file is :"+fobj.getAbsolutePath());
                System.out.println("File size is "+fobj.length());
                System.out.println("We can read from file "+fobj.canRead());
                System.out.println("We can write into file "+fobj.canWrite());
            }
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}
