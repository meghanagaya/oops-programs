import java.util.Scanner;
class Student508
{
public
String fullName;
int rollNum;
double semPercentage; 
String collegeName;
int collegeCode;
Student508()
{
System.out.println("Student class is created successfully!!\nIam a student\n");
}
protected void finalize() throws Throwable
{
System.out.println("The class is finalized\n");
}
}
public class Student
{
public static void main(String[] args)
{
Student508 meghana=new Student508();;
Scanner input=new Scanner(System.in);
System.out.print("Enter your  name : ");
meghana.fullName=input.nextLine();
System.out.print("Enter your rollNumber : ");
meghana.rollNum=input.nextInt();
System.out.print("Enter your semPercentage : ");
meghana.semPercentage=input.nextDouble();
input.nextLine();
System.out.print("Enter your collegeName : ");
meghana.collegeName=input.nextLine();
System.out.print("Enter your collegeCode : ");
meghana.collegeCode=input.nextInt();
System.out.print("Name : "+meghana.fullName+"\n");
System.out.print("RollNumber : "+meghana.rollNum+"\n");
System.out.print("SemPercentage : "+meghana.semPercentage+"\n");
System.out.print("CollegeName : "+meghana.collegeName+"\n");
System.out.print("CollegeCode : "+meghana.collegeCode+"\n");
input.close();
}
}
