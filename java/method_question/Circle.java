public class Circle {
    
    double radius , area;
    void  setRadius(int radius) {
        this.radius = radius;
        
    }
    void  totalArea (){
      this.area = 3.14*radius*radius;
      
    }
    public static void main(String[] args) {
        Circle circle = new Circle();
        circle.setRadius(9);
        circle.totalArea();
        System.out.println(circle.area);    

    }
}
