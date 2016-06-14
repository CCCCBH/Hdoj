import java.math.BigDecimal;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            BigDecimal x1 = input.nextBigDecimal();
            BigDecimal x2 = input.nextBigDecimal();

            if (x1.compareTo(x2) == 0)
            {
                System.out.println("YES");
            } else
            {
                System.out.println("NO");
            }
        }        
    }
}

