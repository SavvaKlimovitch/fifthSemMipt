import java.util.*;
import java.lang.Math;

public class Main {
    public static double simpleExp(double x) {
        double sum = 1;
        double term = 1;
        
        int i = 1;
        while (sum + term != sum) {
            term *= (x / i);
            sum += term;

            i++;
        }
        
        return sum;
    }
    
    public static double myExp(double x) {
        if (x >= 0) {
            return simpleExp(x);
        } else {
            return 1 / simpleExp(-x);
        }
    }
    
    private static int[] createArgsArray() {
        int[] xArr = new int[12];
        
        xArr[0] = 1;
        xArr[6] = -1;
        
        for (int i = 1; i != 6; i++) {
            xArr[i] = 5 * i;
            xArr[6 + i] = -5 * i;
        }
        
        return xArr;
    }
    
    public static void main(String[] args) {
        int[] xArr = createArgsArray();
        
        for (int i = 0; i != xArr.length; i++) {
            int x = xArr[i];
            
            System.out.printf("simpleExp(%d) = %g\n", x, simpleExp(x));
            System.out.printf("myExp(%d) = %g\n", x, myExp(x));
            System.out.printf("exp(%d) = %g\n\n", x, Math.exp(x));
        }
    }
}