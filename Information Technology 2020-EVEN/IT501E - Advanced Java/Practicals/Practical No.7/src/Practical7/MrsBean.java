package Practical7;

public class MrsBean {
    

public static void main(String args[]){  
MrBean s=new MrBean();//object is created  
s.setPilote("Luke");//setting value to the object  
System.out.println(s.getPilote());  
s.setStarFighter("JEDI-StarFighter");
System.out.println(s.getStarFighter()); 
s.setDroid("R2-D2");
System.out.println(s.getDroid()); 
}
}