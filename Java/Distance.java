package distanceconversion;

public class Distance {
    double km, m, miles;

    public double kmtom(double km) {
        return (km * 1000);
    }

    public double mtokm(double m) {
        return (m / 1000);
    }

    public double milestokm(double miles) {
        return (miles * 1.60934);
    }

    public double kmtomiles(double km) {
        return (km / 1.60934);
    }
}