
class Sphere {

    double redius;
    double volumeOfSphere;

    void setRedius(double redius) {
        this.redius = redius;
    }

    double totalOfVolumeSphere() {
        double totalPayment = (4 * 3.14 * redius * redius * redius) / 3;
        return totalPayment;
    }

    public static void main(String[] args) {
        Sphere volumeSphereOneSphere = new Sphere();
        volumeSphereOneSphere.setRedius(9);
        double totalVolume = volumeSphereOneSphere.totalOfVolumeSphere();
        System.out.println(totalVolume);

    }
}
