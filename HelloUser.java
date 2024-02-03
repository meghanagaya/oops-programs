import java.util.*;
public class HelloUser
{
     public static void main (String[],args)
     {
         String name;
         Scanner read=new Scanner(System.in);
         System.out.print("Enter your name : ");
         name=read.nextline();
         System.out.print("Hello "+name);
         read.close();
     }
}