import java.math.BigDecimal;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        while (in.hasNextLong())
        {
            BigDecimal a = new BigDecimal(in.nextLong());
            BigDecimal b = new BigDecimal(in.nextLong());
            BigDecimal c = new BigDecimal(in.nextLong());
            BigDecimal result = (a.multiply(b)).divide(c);
            System.out.println(result);
        }
    }
}
