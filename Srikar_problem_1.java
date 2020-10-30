package hacktoberfest;
import java.util.Scanner;

public class Srikar1 {
public static void main(String[] args){
Scanner in = new Scanner(System.in);
int a;
System.out.println("INPUT NUMBER");
a = in.nextInt();

String[] days = { "SATURDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SUNDAY" };

int index = a % 7;

System.out.printf("YOUR DAY %s", days[index]);
}
}