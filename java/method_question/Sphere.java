
class Sphere {

    double radius;
    double volume;

    void setRadius(double radius) {
        this.radius = radius;
    }

     void  totalVolume() {
       this.volume  = (4 * 3.14 * radius * radius * radius) / 3;
        
    }

    public static void main(String[] args) {
        Sphere sphere = new Sphere();
        sphere.setRadius(9);
         sphere.totalVolume();
        System.out.println(sphere.volume);

    }
}
