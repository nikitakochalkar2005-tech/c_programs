
class Set {

    int x, y, z;

    void setdata(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    int Sum() {
        int sumOfInteger = (this.x + this.y + this.z);
        return sumOfInteger;
    }

    double mean() {
        double meanOfInteger = (x + y + z) / 3.0;
        return meanOfInteger;
    }

    public static void main(String args[]) {
        Set DataSet = new Set();
        DataSet.setdata(8, 9, 6);
        int addition = DataSet.Sum();
        double meanValue = DataSet.mean();
        System.out.println(+meanValue);
        System.out.println(+addition);

    }
}
