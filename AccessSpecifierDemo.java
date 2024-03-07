public class AccessSpecifierDemo {
    private int priVar;
    protected int proVar;
    public int pubVar;

    // Method to set values for private, protected, and public variables
    public void setVar(int priValue, int proValue, int pubValue) {
        priVar = priValue;
        proVar = proValue;
        pubVar = pubValue;
    }

    // Method to display values of private, protected, and public variables
    public void getVar() {
        System.out.println("Private Variable: " + priVar);
        System.out.println("Protected Variable: " + proVar);
        System.out.println("Public Variable: " + pubVar);
    }

    public static void main(String[] args) {
        AccessSpecifierDemo obj = new AccessSpecifierDemo();

        // Set values for variables
        obj.setVar(10, 20, 30);

        // Display values of variables
        obj.getVar();
    }
}
