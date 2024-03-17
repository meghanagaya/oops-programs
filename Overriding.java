class SimpleCalculator
{
    void type()
    {
        System.out.println("Iam a Simple Calculator");
    }
    //void type(){}
}
// Method/function overriding under same class is not possible it leads to duplication of method.

class ScientificCalculator extends SimpleCalculator
{
    void type()
    {
        System.out.println("Iam a Scientific Calculator");
    }
}

public class Overriding
{
    public static void main(String[] args)
    {
        ScientificCalculator obj=new ScientificCalculator();
        obj.type();
    }
}