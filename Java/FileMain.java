import java.util.Scanner;
import java.io.File;

class FileMain {
    public static void main(String args[]) {
        String File_name;
        System.out.println("Enter the file name");
        Scanner sc = new Scanner(System.in);
        File_name = sc.next();
        File f = new File(File_name);
        if (f.exists()) {
            System.out.println("The file" + File_name + " Exists");
            if (f.canRead()) {
                System.out.println("The file" + File_name + " Readable");
            } else {
                System.out.println("Not readable");
            }
            if (f.canWrite()) {
                System.out.println("The file" + File_name + " Writable");
            } else {
                System.out.println("The file" + File_name + " Not writable");
            }
            System.out.println("The file type is " + File_name.substring(File_name.indexOf('.') + 1));
            System.out.println("The length of the file is " + f.length() + "bytes");
        } else {
            System.out.println("The file " + File_name + " does not Exists");
        }
    }
}
