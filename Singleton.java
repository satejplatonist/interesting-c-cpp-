package java_project_2;
import java.util.Scanner;
import java.lang.NullPointerException;

public class Main
{
	public static void main(String args[])
	{ 
       Singleton s1=Singleton.getInstance();
       
       Singleton s2=Singleton.getInstance();
       
       Singleton s3=Singleton.getInstance();
	}
}

class Singleton
{
	private Singleton() {}
	
	private static Singleton instance;
	
	public static Singleton getInstance()
	{
		if(instance==null)
		{
			instance=new Singleton();
		}
		return instance;
	}
	
}
