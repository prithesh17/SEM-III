package currencyconversion;

public class Currency {
    double inr, usd, euro, yen;

    public double dollartorupee(double usd) {
        return usd * 82.55;
    }

    public double rupeetodollar(double inr) {
        return inr / 82.55;
    }

    public double eurotorupee(double euro) {
        return euro * 88.87;
    }

    public double rupeetoeuro(double inr) {
        return inr / 88.87;
    }

    public double yentorupee(double yen) {
        return yen * 0.63;
    }

    public double rupeetoyen(double inr) {
        return inr / 0.63;
    }
}