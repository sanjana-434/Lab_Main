class Customer{
    private int id;
    private String name;
    private int discount;
    
    public Customer(int id,String name,int discount){
        this.id = id;
        this.name= name;
        this.discount = discount;
    }
    public int getID(){
        return id;
    }
    public String getName(){
        return name;
    }
    public int getDiscount(){
        return discount;
    }
    public void setDiscount(int discount){
        this.discount = discount;
    }
    public String toString(){
        return "\nName : "+name+"\nId : "+id+"\nDiscount : "+discount;
    }
}
class Invoice{
    private int id;
    private Customer customer;
    private double amount;
    
    public Invoice(int id,Customer customer,double amount){
        this.id = id;
        this.customer = customer;
        this.amount = amount;
    }
    public int getID(){
        return id;
    }
    public Customer getCustomer(){
        return customer;
    }
    public void setCustomer(Customer customer){
        this.customer = customer;
    }
    public double getAmount(){
        return amount;
    }
    public void setAmount(double amount){
        this.amount= amount;
    }
    public int getCustomerID(){
        return customer.getID();
    }
    public String getCustomerName(){
        return customer.getName();
    }
    public int getCustomerDiscount(){
        return customer.getDiscount();
    }
    public double getAmountAfterDiscount(){
        return amount - (double)amount*(double)(customer.getDiscount())/100.0;
    }
    public String toString(){
        return "\nInvoice id : "+id+"\nCustomer Name : "+customer.getName()+"\nDiscount : "+customer.getDiscount()+"\nAmount : "+amount;
    }
}
public class ps5_9
{
	public static void main(String[] args) {
	    Customer cust = new Customer(2044,"Sanjana",5);
        Invoice invoice = new Invoice(2044,cust,100.4);
        System.out.println(invoice.toString());
        System.out.println("Amount After discount : "+invoice.getAmountAfterDiscount());
	}
}
