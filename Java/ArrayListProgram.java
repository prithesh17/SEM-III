import java.util.*;

class ArrayListProgram {
    ArrayList<String> list = new ArrayList<String>();
    Scanner sc = new Scanner(System.in);

    void display() {
        System.out.println("ArrayList element are");
        System.out.println(list);
    }

    void appendatend() {
        System.out.println("Enter the element to append at end");
        String ele = sc.next();
        list.add(ele);
    }

    void insertatpos() {
        System.out.println("Enter the position and element to insert");
        int index = sc.nextInt();
        String ele = sc.next();
        list.add(index, ele);
    }

    void searchele() {
        System.out.println("Enter the Array element to search");
        String ele = sc.next();
        int in = list.indexOf(ele);
        if (in == -1) {
            System.out.println("Element not found");
        } else {
            System.out.println("Element found at " + in);
        }
    }

    void displaywithchar() {

        System.out.println("Enter the starting charecter to print strings");
        char inputc = sc.next().charAt(0);
        String strc = Character.toString(inputc);
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).startsWith(strc)) {
                System.out.println("String starting with character " + strc);
                System.out.println(list.get(i));
            }
        }
    }

    public static void main(String args[]) {
        ArrayListProgram obj = new ArrayListProgram();
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("1.Append at the End");
            System.out.println("2.Insert at the Position");
            System.out.println("3.Search an item");
            System.out.println("4.Display the ArrayList");
            System.out.println("5.Display the ArrayList with starting Character");
            System.out.println("6.Exit");
            System.out.println("Enter Your Choice : ");
            int choice = sc.nextInt();
            switch (choice) {
                case 1: {
                    obj.appendatend();
                    break;
                }
                case 2: {
                    obj.insertatpos();
                    break;
                }
                case 3: {
                    obj.searchele();
                    break;
                }
                case 4: {
                    obj.display();
                    break;
                }
                case 5: {
                    obj.displaywithchar();
                    break;
                }
                case 6:
                    System.exit(0);
            }
        }
    }
}
