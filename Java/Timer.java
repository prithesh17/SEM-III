package timeconversion;

public class Timer {
    double hours, seconds, minutes;

    public double secondstohours(double seconds) {
        return seconds / 3600;
    }

    public double minutestohours(double minutes) {
        return minutes / 60;
    }

    public double hourstominutes(double hours) {
        return (hours * 60);
    }

    public double hourstoseconds(double hours) {
        return (hours * 3600);
    }
}