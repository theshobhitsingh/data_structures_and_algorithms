public class BoxClass {
    private double length;
    private double width;
    private double height;

    public BoxClass(double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }

    public BoxClass(double side) {
        this.length = side;
        this.width = side;
        this.height = side;
    }

    public double getArea() {
        return 2 * (length * width + width * height + height * length);
    }

    public double getVolume() {
        return length * width * height;
    }

    public static void main(String[] args) {
        BoxClass box1 = new BoxClass(3.0, 4.0, 5.0);
        System.out.println("Box 1 Area: " + box1.getArea());
        System.out.println("Box 1 Volume: " + box1.getVolume());

        BoxClass box2 = new BoxClass(3.0);
        System.out.println("Box 2 Area: " + box2.getArea());
        System.out.println("Box 2 Volume: " + box2.getVolume());
    }
}