import java.util.*;
import currencyconversion.Currency;
import distanceconversion.Distance;
import timeconversion.Timer;

class Converter {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int choice, ch;
        double inr, usd, euro, yen;
        double km, m, miles;
        double hours, seconds, minutes;
        Currency c = new Currency();
        Distance d = new Distance();
        Timer t = new Timer();
        do {
            System.out.println("1.dollar to rupee ");
            System.out.println("2.rupee to dollar ");
            System.out.println("3.Euro to rupee ");
            System.out.println("4.Rupee to Euro ");
            System.out.println("5.Yen to rupee ");
            System.out.println("6.Rupee to Yen ");
            System.out.println("7.Meter to kilometer ");
            System.out.println("8.kilometer to meter ");
            System.out.println("9.Miles  to kilometer ");
            System.out.println("10.Kilometer to miles");
            System.out.println("11.Hours to Minutes");
            System.out.println("12.Hours to Seconds");
            System.out.println("13.Seconds to Hours");
            System.out.println("14.Minutes to Hours");
            System.out.println("Enter ur choice");
            choice = in.nextInt();
            switch (choice) {
                case 1: {
                    System.out.println("Enter dollars to convert into Rupees:");
                    usd = in.nextDouble();
                    System.out.println("Dollar =" + usd + " equal to INR= " + c.dollartorupee(usd));
                    break;
                }
                case 2: {
                    System.out.println("Enter Rupee to convert into Dollars:");
                    inr = in.nextDouble();
                    System.out.println("Rupee =" + inr + " equal to Dollars= " + c.rupeetodollar(inr));
                    break;
                }
                case 3: {
                    System.out.println("Enter Euro to convert into Rupees:");
                    euro = in.nextDouble();
                    System.out.println("Euro = " + euro + " equal to INR= " + c.eurotorupee(euro));
                    break;
                }
                case 4: {
                    System.out.println("Enter Rupees to convert into Euro:");
                    inr = in.nextDouble();
                    System.out.println("Rupee =" + inr + "equal to Euro=" + c.rupeetoeuro(inr));
                    break;
                }
                case 5: {
                    System.out.println("Enter yen to convert into Rupees:");
                    yen = in.nextDouble();
                    System.out.println("YEN=" + yen + "equal to INR=" + c.yentorupee(yen));
                    break;
                }
                case 6: {
                    System.out.println("Enter Rupees to convert into Yen:");
                    inr = in.nextDouble();
                    System.out.println("INR=" + inr + "equal to YEN" + c.rupeetoyen(inr));
                    break;
                }
                case 7: {
                    System.out.print("Enter in meter ");
                    m = in.nextDouble();
                    System.out.println(m + "m" + "equal to" + d.mtokm(m) + "kilometres");
                    break;
                }
                case 8: {
                    System.out.print("Enter in km ");
                    km = in.nextDouble();
                    System.out.println(km + "km" + " equal to" + d.kmtom(km) + " metres");
                    break;
                }
                case 9: {
                    System.out.print("Enter in miles");
                    miles = in.nextDouble();
                    System.out.println(miles + "miles" + "equal to" + d.milestokm(miles) + "kilometres");
                    break;
                }
                case 10: {
                    System.out.print("Enter in km");
                    km = in.nextDouble();
                    System.out.println(km + "km" + "equal to" + d.kmtomiles(km) + "miles");
                    break;
                }
                case 11: {
                    System.out.println("enter the number of hours");
                    hours = in.nextDouble();
                    System.out.println("Minutes: " + t.hourstominutes(hours));
                    break;
                }
                case 12: {
                    System.out.println("enter the number of hours");
                    hours = in.nextDouble();
                    System.out.println("Seconds: " + t.hourstoseconds(hours));
                    break;
                }
                case 13: {
                    System.out.println("Enter the number of seconds: ");
                    seconds = in.nextDouble();
                    System.out.println("Hours: " + t.secondstohours(seconds));
                    break;
                }
                case 14: {
                    System.out.print("Enter the number of minutes: ");
                    minutes = in.nextDouble();
                    System.out.println("Hours: " + t.minutestohours(minutes));
                    break;
                }
            }
            System.out.println("Enter 0 to  quit and 1 to continue ");
            ch = in.nextInt();
        } while (ch == 1);
    }
}