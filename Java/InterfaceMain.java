import java.util.*;
import java.lang.*;
interface Resume
{
	public void biodata();
}

class Teacher implements Resume
{
	Scanner sc =new Scanner(System.in);
	String name,empid,qualification,achievement;
	double experience;
	public void biodata()
	{
		System.out.println("Enter Name");
		name=sc.nextLine();
		System.out.println("Enter Employe ID");
		empid=sc.nextLine();
		System.out.println("Enter Qualification");
		qualification=sc.nextLine();
		System.out.println("Enter Acheivement");
		achievement=sc.nextLine();
		System.out.println("Enter Experience");
		experience=sc.nextDouble();
		System.out.println("Teacher Resume");
		System.out.println("Name : "+name);
		System.out.println("Employ ID : "+empid);
		System.out.println("Qualification : "+qualification);
		System.out.println("Achievement : "+achievement);
		System.out.println("Experience : "+experience);
	}
}
	
class Student implements Resume
{
	Scanner sc =new Scanner(System.in);
	String name,discipline,usn,email;
	double result;
	public void biodata()
	{
		System.out.println("Enter Name");
		name=sc.nextLine();
		System.out.println("Enter Discipline ");
		discipline=sc.nextLine();
		System.out.println("Enter USN");
		usn=sc.nextLine();
		System.out.println("Enter Email");
		email=sc.nextLine();
		System.out.println("Enter Result");
		result=sc.nextDouble();
		System.out.println("Teacher Resume");
		System.out.println("Name : "+name);
		System.out.println("Discipline : "+discipline);
		System.out.println("USN : "+usn);
		System.out.println("Email ID : "+email);
		System.out.println("Result : "+result);
	}
}
class InterfaceMain
{
	public static void main(String args [])
	{
		Teacher t=new Teacher();
		t.biodata();
		Student s=new Student();
		s.biodata();
	}
}		