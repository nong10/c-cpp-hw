public class A9p3{
    
    public static void main(String[] args) {
        double y = -10;
        String s = "123456";
        System.out.println(s.indexOf('3'));
        System.out.println(absDIY(y));
    }

    public static double absDIY(double x) {
        return x > 0 ? x : -x;
    }

}