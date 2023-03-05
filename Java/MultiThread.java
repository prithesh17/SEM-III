import java.util.*;

class Square extends Thread {
    int x;

    Square(int n) {
        x = n;
    }

    public void run() {
        int sqr = x * x;
        for (int i = 0; i < 5; i++){
            System.out.println("Square of " + x + " = " + sqr);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.out.println(ex);
            }
        }
    }
}

class Cube extends Thread {
    int x;

    Cube(int n) {
        x = n;
    }

    public void run() {
        int cub = x * x * x;
        for (int i = 0; i < 5; i++){
            System.out.println("Cube of " + x + " = " + cub);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.out.println(ex);
            }
        }
    }
}

class RandomNumber extends Thread {
    public void run() {
        Random random = new Random();
        for (int i = 0; i < 5; i++) {
            int randomInteger = random.nextInt(10);
            System.out.println("Random Integer generated : " + randomInteger);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.out.println(ex);
            }
        }
    }
}

class MultiThread {
    public static void main(String[] args) {
        RandomNumber n = new RandomNumber();
        n.start();
        Square s = new Square(7);
        s.start();
        Cube c = new Cube(5);
        c.start();
    }
}
